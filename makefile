all: main.o construction.o
	gcc -o program main.o construction.o

main.o: main.c header.h
	gcc -c main.c

construction.o: construction.c header.h
	gcc -c construction.c

run:
	./program

clean:
	rm *.o
