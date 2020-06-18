#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long convertDecimalToBinary(int);

int main() {
    
    int input;
    printf("Enter the decimal number to convert to binary: ");
    scanf("%d", &input);

    long long result = convertDecimalToBinary(input);

    printf("%d = %lld\n", input, result);

    return 0;
}

long long convertDecimalToBinary(int input) {
    long long result = 0; 
    for (int i = 1, remain; input != 0;) {
        remain = input % 2;
        input /= 2;
        result += remain * i;
        i *= 10;
    }

    return result;
}
