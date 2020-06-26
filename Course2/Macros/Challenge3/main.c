#include<stdio.h>
#include<stdlib.h>

#define IS_UPPER(a) 'A' <= a && a  <= 'Z'
#define IS_LOWER(b) 'a' <= b && b <= 'z'

int main() {
   
    char input;
    printf("Enter a character: ");
    input = getchar();

    if (IS_UPPER(input)) {
        printf("Character is uppercase\n");
    }

    if (IS_LOWER(input)) {
        printf("Character is lowercase\n");
    }


    return 0;
}
