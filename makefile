TARGET=go
all: ${TARGET}

${TARGET}: ast.o ${TARGET}_parser.o ${TARGET}_lexer.o main.o
	g++ -std=c++11 -g -o $@ $^
	
ast.o: ast.cpp ast.h
	g++ -std=c++11 -g -c -o $@ $<

main.o:	main.cpp
	g++ -std=c++11 -g -c -o $@ $<
	
${TARGET}_lexer.o: ${TARGET}_lexer.cpp
	g++ -std=c++11 -g -c -o $@ $<

${TARGET}_lexer.cpp:  ${TARGET}.l
	flex -o $@ $<

${TARGET}_parser.cpp: ${TARGET}.y ast.h
	bison --defines=tokens.h -o $@ $<

${TARGET}_parser.o: ${TARGET}_parser.cpp
	g++ -std=c++11 -g -c -o $@ $<

clean:
	rm -f *.o
	rm -f  ${TARGET}_lexer.cpp
	rm -f  ${TARGET}_parser.cpp
	rm -f  ${TARGET}
	rm -f tokens.h

lexer_only:
	flex go.l
	gcc lex.yy.c -lfl
	./a.out

push: 
	git config pull.rebase false
	git pull origin master
	git add .
	git commit -m "Revision V${REV}.0"
	git push origin master