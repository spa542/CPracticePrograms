lib_strfunclib.a: lib_strfunclib.o StringFunctions.h
	ar rcs lib_strfunclib.a lib_strfunclib.o
lib_strfunclib.o: StringFunctions.h StringFunctions.c
	gcc -c StringFunctions.c -o lib_strfunclib.o
clean:
	rm -f *.o *.a
