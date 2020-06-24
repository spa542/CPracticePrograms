#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    return false;
}

bool isOdd(int num) {
    if (num % 2 != 0) {
        return true;
    }
    return false;
}

bool isPrime(int num) {
    int c;
 
    for ( c = 2 ; c <= num - 1 ; c++ )
    { 
        if ( num%c == 0 )
        return false;
    }
    return true;
}

int main(int argc, char **argv) { 
   
    if (argc != 2) {
        puts("Must enter to arguments, (program) (input file)");
        exit(1);
    }

    FILE* fp = NULL;
    if ((fp = fopen(argv[1], "r+")) == NULL) {
        puts("Error opening file");
        exit(2);
    }

    int array[5];
    while(fscanf(fp, "%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]) != EOF) {
        for (int i = 0; i < 5; i++) {
            printf("%d is...\n", array[i]);
            if (isEven(array[i])) {
                printf("Even\n");
            }
            if (isOdd(array[i])) {
                printf("Odd\n");
            }
            if (isPrime(array[i])) {
                printf("Prime\n");
            }
            
                    
        }
    }

    fclose(fp);

    return 0;
}
