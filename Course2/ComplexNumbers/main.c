#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include<math.h>

int main() {
    
    double complex first = 1.0 * 2.0 * (I * I);

    printf("The real number value of first is: %f\n", creal(first));
    printf("The imaginary number value of first is: %f\n", cimag(first));

    double complex second = 4.5 * 8.2 * pow(I, 2);

    printf("The real number value of second is: %f\n", creal(second));
    printf("The imaginary number value of second is: %f\n", cimag(second));

    return 0;
}
