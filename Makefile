project: compile start
compile: task2.c
	g++ task2.c -o task2.o
start: task2.o
	./task2.o

