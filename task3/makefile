#make/third/makefile
exe: myMathFunc.o myMain.o myStrFunc.o

	gcc myMathFunc.o myMain.o myStrFunc.o -o exe

myMain.o:myMain.c myMain.h myMath.h myStr.h
	gcc -c myMain.c -I

myMathFunc.o:myMathFunc.c myMath.h
	gcc -c myMathFunc.c

myStrFunc.o:myStrFunc.c myStr.h
	gcc -c myStrFunc.c
