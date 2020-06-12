#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int gcd(int first, int second) {
    int start;
    if (first > second) {
        start = second;
    } else {
        start = first;
    }

    for (int i = start; i > 0; i--) {
        if (first % start == 0 && second % start == 0) {
            return start;
        }
    }
    return -1;
}

int absoluteVal(int num) {
    if (num < 0) {
        return num * -1;
    }
    return num;
}

double calcSqrt(double num) {
    if (num < 0) {
        printf("Cannot square root a negative number\n");
        return -1;
    }
    return sqrt(num); 
}

int main() {

    printf("GCD of 15 and 5 is %d\n", gcd(15, 5));
    printf("Absolute Value of -10 is %d\n", absoluteVal(-10));
    printf("Square root of 81 is %lf\n", calcSqrt(81));

    return 0;
}
