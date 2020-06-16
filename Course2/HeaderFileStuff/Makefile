main: main.o head.o 
	gcc main.o head.o -o main -g
main.o: main.c head.h
	gcc -c main.c -g
head.o: head.h head.c
	gcc -c head.c -g
clean:
	rm -f *.o main
