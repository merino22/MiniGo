#include "ast.h"
#include <iostream>

class ContextStack{
    public:
        struct ContextStack* prev;
        map<string, Type> variables;
};

class FunctionInfo{
    public:
        Type returnType;
        list<Parameter *> parameters;
};

map<string, Type> globalVariables = {};
map<string, Type> variables;
map<string, FunctionInfo*> methods;
map<string, Type> packages;
map<string, Type> imports;
map<string, Type> resultTypes ={
    {"INT,INT", INT},
    {"FLOAT,FLOAT", FLOAT},
    {"INT,FLOAT", FLOAT},
    {"FLOAT,INT", FLOAT},
    {"STRING,STRING", STRING},
    {"BOOL,BOOL", BOOL},
    {"DYNAMIC,INT", INT},
    {"INT,DYNAMIC", INT},
    {"DYNAMIC,FLOAT", FLOAT},
    {"FLOAT,DYNAMIC", FLOAT},
};

string getTypeName(Type type){
    switch(type){
        case INT:
            return "INT";
        case FLOAT:
            return "FLOAT";
        case VOID:
            return "VOID";
        case INT_ARRAY:
            return "INT";
        case FLOAT_ARRAY:
            return "FLOAT";
        case BOOL:
            return "BOOL";
        case IMPORT:
            return "IMPORT";
        case PACKAGE:
            return "PACKAGE";
        case DYNAMIC:
            return "DYNAMIC";
    }

    cout<<"Unknown type"<<endl;
    exit(0);
}

ContextStack * context = NULL;

void pushContext(){
    variables.clear();
    ContextStack * c = new ContextStack();
    c->variables = variables;
    c->prev = context;
    context = c;
}

void popContext(){
    if(context != NULL){
        ContextStack * previous = context->prev;
        free(context);
        context = previous;
    }
}

Type getLocalVariableType(string id){
    ContextStack * currContext = context;
    while(currContext != NULL){
        if(currContext->variables[id] != 0)
            return currContext->variables[id];
        currContext = currContext->prev;
    }
    if(!context->variables.empty())
        return context->variables[id];
    return INVALID;
}


Type getVariableType(string id){
    if(!globalVariables.empty())
        return globalVariables[id];
    return INVALID;
}


bool variableExists(string id){
  Type value;
  if(context != NULL){
    value = getLocalVariableType(id);
    //context->variables[id] != 0
    if(value != 0)
      return true;
  }
  return false;
}

int BlockStatement::evaluateSemantic(){
    list<Declaration *>::iterator itd = this->declarations.begin();
    while (itd != this->declarations.end())
    {
        Declaration * dec = *itd;
        if(dec != NULL){
            dec->evaluateSemantic();
        }

        itd++;
    }

    list<Statement *>::iterator its = this->statements.begin();
    while (its != this->statements.end())
    {
        Statement * stmt = *its;
        if(stmt != NULL){
            stmt->evaluateSemantic();
        }

        its++;
    }

    return 0;
}

int Declaration::evaluateSemantic(){
    list<InitDeclarator * >::iterator it = this->declarations.begin();
    while(it != this->declarations.end()){
        InitDeclarator * declaration = (*it);
        if(declaration->declarator->isArray){
            if(declaration->declarator->arrayDeclaration == NULL && declaration->initializer == NULL){
                cout<<"error: storage size of: "<<declaration->declarator->id  <<" is unknown line: "<<this->line<<endl;
                exit(0);
            }
        }
        // if(this->type != (*ite) && this->type != INT && this->type != STRING && this->type != DYNAMIC){
        //             cout<<"error: invalid conversion from: "<< getTypeName(exprType) <<" to " <<getTypeName(this->type)<< " line: "<<this->line <<endl;
        //             exit(0);
        //         }
        if(declaration->initializer != NULL){
            list<Expr *>::iterator ite = declaration->initializer->expressions.begin();
            while(ite!= declaration->initializer->expressions.end()){
                Type exprType = (*ite)->getType();
                if(exprType != FLOAT && exprType != INT && exprType != STRING && exprType != DYNAMIC){
                    cout<<"error: invalid conversion from: "<< getTypeName(exprType) <<" to " <<getTypeName(this->type)<< " line: "<<this->line <<endl;
                    exit(0);
                }
                if(this->type != exprType){
                    cout<<"error: invalid conversion from: "<< getTypeName(exprType) <<" to " <<getTypeName(this->type)<< " line: "<<this->line <<endl;
                    exit(0);
                }
                ite++;
            }
        }
        if(!variableExists(declaration->declarator->id)){
            cout<<"Variable ["<<declaration->declarator->id<<"] created"<<endl;
            context->variables[declaration->declarator->id] = this->type;
        }else{
            cout<<"error: redefinition of variable: "<< declaration->declarator->id<< " line: "<<this->line <<endl;
            exit(0);
        }
    it++;
  }
  return 0;
}

int GlobalDeclaration::evaluateSemantic(){
    //TODO: evaluar semántica.
    return 0;
}
int PackageDeclaration::evaluateSemantic(){
    this->declaration->evaluateSemantic();
    return 0;
}
int ImportDeclaration::evaluateSemantic(){
    //TODO: evaluar semántica.
    return 0;
}

void addPackageDeclaration(string id, int line, Type type){
    if(packages[id] != 0){
        cout<<"redefinition of package "<<id<<" in line: "<<line<<endl;
        exit(0);
    }
    cout<<"Package ["<<id<<"] created"<<endl;
    packages[id] = type;
}

void addImportDeclaration(int line, Type type, ParameterList params){
    list<Parameter *>::iterator paramIt = params.begin();
    while(paramIt != params.end()){
        if(imports[(*paramIt)->declarator->id] != 0){
            cout<<"redefinition of import "<<(*paramIt)->declarator->id<<" in line: "<<line<<endl;
            exit(0);
        }
        cout<<"Import ["<<(*paramIt)->declarator->id<<"] created"<<endl;
        imports[(*paramIt)->declarator->id] = type;   
        paramIt++;
    }
}

void addMethodDeclaration(string id, int line, Type type, ParameterList params){
    if(methods[id] != 0){
        cout<<"redefinition of function "<<id<<" in line: "<<line<<endl;
        exit(0);
    }
    methods[id] = new FunctionInfo();
    methods[id]->returnType = type;
    methods[id]->parameters = params;
}

int MethodDefinition::evaluateSemantic(){
    if(this->type != PACKAGE && this->type != IMPORT){
        if(this->params.size() > 4){
        cout<< "Method: "<<this->id << " can't have more than 4 parameters, line: "<< this->line<<endl;
        exit(0);
        }

        addMethodDeclaration(this->id, this->line, this->type, this->params);
        pushContext();
    
        list<Parameter* >::iterator it = this->params.begin();
        while(it != this->params.end()){
            (*it)->evaluateSemantic();
            it++;
        }

        if(this->statement !=NULL ){
            this->statement->evaluateSemantic();
        }
        
        popContext();
    }else if(this->type == PACKAGE){
        addPackageDeclaration(this->id, this->line, this->type);
    }else{
        addImportDeclaration(this->line, this->type, this->params);
    }
    

    return 0;
}

Type IntExpr::getType(){
    return INT;
}

Type FloatExpr::getType(){
    return FLOAT;
}

Type BoolExpr::getType(){
    return BOOL;
}

#define IMPLEMENT_BINARY_GET_TYPE(name)\
Type name##Expr::getType(){\
    string leftType = getTypeName(this->expr1->getType());\
    string rightType = getTypeName(this->expr2->getType());\
    Type resultType = resultTypes[leftType+","+rightType];\
    if(resultType == 0){\
        cerr<< "Error: type "<< leftType <<" can't be converted to type "<< rightType <<" line: "<<this->line<<endl;\
        exit(0);\
    }\
    return resultType; \
}\

#define IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(name)\
Type name##Expr::getType(){\
    string leftType = getTypeName(this->expr1->getType());\
    string rightType = getTypeName(this->expr2->getType());\
    Type resultType = resultTypes[leftType+","+rightType];\
    if(resultType == 0){\
        cerr<< "Error: type "<< leftType <<" can't be converted to type "<< rightType <<" line: "<<this->line<<endl;\
        exit(0);\
    }\
    return BOOL; \
}\


Type getUnaryType(Type expressionType, int unaryOperation){
    switch(unaryOperation){
        case INCREMENT:
        case DECREMENT:
            if(expressionType == INT || expressionType == FLOAT)
                return expressionType;
        case NOT:
            if(expressionType == BOOL)
                return BOOL;
    }

    cerr<<"Error: Invalid type"<<endl;
    exit(0);
}

int Parameter::evaluateSemantic(){
    if(!variableExists(this->declarator->id)){
        cout<<"Variable ["<<declarator->id<<"] created"<<endl;
        context->variables[declarator->id] = this->type;
    }else{
        cout<<"error: redefinition of variable: "<< declarator->id<< " line: "<<this->line <<endl;
        exit(0);
    }
    return 0;
}

Type UnaryExpr::getType(){
    Type exprType = this->expr->getType();
    return getUnaryType(exprType, this->type);
}

Type ArrayExpr::getType(){
    return this->id->getType();
}

Type IdExpr::getType(){
    Type value;
    if(context != NULL){
        value = getLocalVariableType(this->id);
        if(value != 0)
            return value;
    }
    value = getVariableType(this->id);
    if(value == 0){
        cout<<"error: '"<<this->id<<"' was not declared in this scope line: "<<this->line<<endl;
        exit(0);
    }
    return value;
}

Type MethodInvocationExpr::getType(){
    FunctionInfo * func = methods[this->id->id];
    if(func == NULL){
        cout<<"error: function "<<this->id->id<<" not found, line: "<<this->line<<endl;
        exit(0);
    }
    Type funcType = func->returnType;
    if(func->parameters.size() > this->args.size()){
        cout<<"error: to few arguments to function"<<this->id->id<<" line: "<<this->line<<endl;
        exit(0);
    }
    if(func->parameters.size() < this->args.size()){
        cout<<"error: to many arguments to function "<<this->id->id<<" line: "<<this->line<<endl;
        exit(0);
    }

    list<Parameter *>::iterator paramIt = func->parameters.begin();
    list<Expr *>::iterator argsIt =this->args.begin();
    while(paramIt != func->parameters.end() && argsIt != this->args.end()){
        string paramType = getTypeName((*paramIt)->type);
        string argType = getTypeName((*argsIt)->getType());
        if( paramType != argType && argType != "DYNAMIC"){
            cout<<"error: invalid conversion from: "<< argType <<" to " <<paramType<< " line: "<<this->line <<endl;
            exit(0);
        }
        paramIt++;
        argsIt++;
    }

    return funcType;
}

Type PostIncrementExpr::getType(){
    return this->expr->getType();
}

Type PostDecrementExpr::getType(){
    return this->expr->getType();
}

Type StringExpr::getType(){
    return STRING;
}

int WhileStatement::evaluateSemantic(){
    if(this->expr->getType() != BOOL){
        cout<<"Expression for while must be boolean";
        exit(0);
    }
    
    pushContext();
    if(this->stmt != NULL){
        this->stmt->evaluateSemantic();
    }
    popContext();
    return 0;
}

int IfStatement::evaluateSemantic(){
    cout<<this->conditionalExpr->getType();
    if(this->conditionalExpr->getType() != BOOL){
        cout<<"Expression for if must be boolean";
        exit(0);
    }
    pushContext();
    this->trueStatement->evaluateSemantic();
    popContext();
    return 0;
}
int IfStatementExtended::evaluateSemantic(){
    //this->statement->evaluateSemantic();
    if(this->statement->getType() != BOOL &&  this->conditionalExpr->getType() != BOOL){
        cout<<"Expression for if Extended must be boolean";
        exit(0);
    }
    pushContext();
    this->trueStatement->evaluateSemantic();
    popContext();
    return 0;
}
int ElseStatement::evaluateSemantic(){
    if(this->conditionalExpr->getType() != BOOL){
        cout<<"Expression for Else if must be boolean";
        exit(0);
    }
    pushContext();
    this->trueStatement->evaluateSemantic();
    popContext();
    pushContext();
    if(this->falseStatement != NULL)
        this->falseStatement->evaluateSemantic();
    popContext();
    return 0;
}
int ElseStatementExtended::evaluateSemantic(){
    //this->statement->evaluateSemantic();
    if(this->statement->getType() != BOOL && this->conditionalExpr->getType() != BOOL){
        cout<<"Expression for Else if Extended must be boolean";
        exit(0);
    }
    pushContext();
    this->trueStatement->evaluateSemantic();
    popContext();
    pushContext();
    if(this->falseStatement != NULL)
        this->falseStatement->evaluateSemantic();
    popContext();
    return 0;
}

int ForStatement::evaluateSemantic(){
    if (this->expr!=NULL)
    {
        if(this->expr->getType() != BOOL){
            cout<<"Expression for for must be boolean";
            exit(0);
        }
    }
    
    
    pushContext();
    if(this->stmt != NULL){
        this->stmt->evaluateSemantic();
    }
    popContext();
    return 0;
}

int ForStatementExtended::evaluateSemantic(){
    //this->leftExpr->evaluateSemantic();
    if(this->leftExpr->getType() != BOOL && this->middleExpr->getType() != BOOL && this->rightExpr->getType() != BOOL){
        cout<<"Expressions for for must be boolean";
        exit(0);
    }
    
    pushContext();
    if(this->stmt != NULL){
        this->stmt->evaluateSemantic();
    }
    popContext();
    return 0;
}
int ExprStatement::evaluateSemantic(){
    return this->expr->getType();
}

int ReturnStatement::evaluateSemantic(){
    return this->expr!= NULL ? this->expr->getType(): 0;
}

int BreakStatement::evaluateSemantic(){
    return 0;
}

int ContinueStatement::evaluateSemantic(){
    return 0;
}

int PrintStatement::evaluateSemantic(){
    if (this->expr!=NULL)
    {
        return this->expr->getType();
    }
    return 1;
}

IMPLEMENT_BINARY_GET_TYPE(Add);
IMPLEMENT_BINARY_GET_TYPE(Sub);
IMPLEMENT_BINARY_GET_TYPE(Mul);
IMPLEMENT_BINARY_GET_TYPE(Div);
IMPLEMENT_BINARY_GET_TYPE(Mod);
IMPLEMENT_BINARY_GET_TYPE(Pwr);
IMPLEMENT_BINARY_GET_TYPE(Assign);
IMPLEMENT_BINARY_GET_TYPE(PlusAssign);
IMPLEMENT_BINARY_GET_TYPE(MinusAssign);
IMPLEMENT_BINARY_GET_TYPE(MultAssign);
IMPLEMENT_BINARY_GET_TYPE(DivAssign);
IMPLEMENT_BINARY_GET_TYPE(PwrAssign);
IMPLEMENT_BINARY_GET_TYPE(ModAssign);

IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Eq);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Neq);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Gte);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Lte);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Gt);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(Lt);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(LogicalAnd);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(LogicalOr);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(AndAssign);
IMPLEMENT_BINARY_BOOLEAN_GET_TYPE(OrAssign);