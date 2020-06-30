main: main.o list.o
	gcc -o main main.o list.o -g 
main.o: list.h main.c
	gcc -c main.c -g
list.o: list.h list.c
	gcc -c list.c -g
clean:
	rm -f *.o main
