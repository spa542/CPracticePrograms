#include<stdio.h>
#include<stdlib.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
   
    int input;
    printf("Input the last number of the range starting from 1: ");
    scanf("%d", &input);
    printf("The sum of numbers from 1 to %d is %d\n", input, sum(input));

    return 0;
}
