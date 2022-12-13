main: find.o main.o
	gcc find.o main.o -o main

encrypt.o: find.c find.h 
	gcc -c find.c

main.o: main.c find.h 
	gcc -c main.c