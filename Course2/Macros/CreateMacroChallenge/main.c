#include<stdio.h>
#include<stdlib.h>

#define SUM(a, b) a + b


int main() {

    int num1, num2;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);

    printf("This macro will produce the sum being: %d\n", SUM(num1, num2));

    return 0;
}
