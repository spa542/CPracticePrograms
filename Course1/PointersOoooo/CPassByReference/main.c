#include<stdio.h>
#include<stdlib.h>

int square(int* point) {
    return *point * (*point);
}

int main() { 
    
    int input;
    
    printf("Enter a number: ");
    scanf("%d", &input);
    printf("The square of your input is %d\n", square(&input));

    return 0; 
}
