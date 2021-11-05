TARGET=go
REV=10
all: ${TARGET}

${TARGET}: ${TARGET}_parser.o ${TARGET}_lexer.o main.o
	g++ -g -o $@ $^
	
main.o:	main.cpp
	g++ -g -c -o $@ $<
	
${TARGET}_lexer.o:	 ${TARGET}_lexer.cpp
	g++ -g -c -o $@ $<

${TARGET}_lexer.cpp:	 ${TARGET}.l
	flex -o $@ $<


${TARGET}_parser.cpp: ${TARGET}.y
	bison --defines=tokens.h -o $@ $<

${TARGET}_parser.o: ${TARGET}_parser.cpp
	g++ -g -c -o $@ $<

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
	${REV=REV+1}