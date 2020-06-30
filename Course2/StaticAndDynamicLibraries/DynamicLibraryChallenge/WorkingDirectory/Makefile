main: main.o
	gcc -o main main.o -L ../StringFunctionsLibrary/ -l _strfunclib
main.o: main.c
	gcc -I ../StringFunctionsLibrary -c main.c -g -o main.o
clean:
	rm -f *.o main
