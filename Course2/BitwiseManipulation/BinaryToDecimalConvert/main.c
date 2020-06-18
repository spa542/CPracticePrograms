#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int convertBinaryToDecimal(long long);

int main() {

    long long input; 
    printf("Enter your binary number to be converted: ");
    scanf("%lld", &input);
    
    int result = convertBinaryToDecimal(input);
   
    printf("%lld = %d\n", input, result);
    
    return 0;
}

int convertBinaryToDecimal(long long input) {
    double result = 0;
    for (int i = 0, remain = 0; input != 0; i++) {
        remain = input % 10; 
        input /= 10;
        if (remain == 1) {
            if (i == 0) {
                result += 1;
            } else {
                result += pow(2.0, (double)i);
            }
        }
    }

    return result;
}
