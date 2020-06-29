main: main.o
	gcc -o main main.o ../StringFunctionsLibrary/lib_strfunclib.a
main.o: main.c
	gcc -I ../StringFunctionsLibrary -c main.c -g
clean:
	rm -f *.o main
