all : prog

prog : main.o circle.o
	gcc -Wall geomcode.o -o mainprog
main.o : geomcode.c
	gcc -Wall -c geomcode.c
circle.o : circle.c
	gcc -Wall -c circle.c
