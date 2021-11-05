

all: interp

interp: main.o
	gcc -o interp main.o

main.o: ./fontes/main.c ./fontes/interpretador.h
	gcc -o main.o ./fontes/main.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ interp
