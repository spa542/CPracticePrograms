#include<stdio.h>
#include<stdlib.h>

#define SQUARE(a) a * a
#define CUBE(a) a * a * a

int main() {

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    printf("The square of the number is %d\n", SQUARE(input));
    printf("The cube of the number is %d\n", CUBE(input));

    return 0;
}
