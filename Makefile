all : prog

prog : main.o circle.o
	gcc geomcode.o -o mainprog
main.o : geomcode.c
	gcc -c geomcode.c
circle.o : circle.c
	gcc -c circle.c
