#include<stdio.h>
#include<stdlib.h>

int main() {
    int num[100];
    int primes[100];

    for (int i = 0; i < 100; i++) {
        num[i] = i + 1;    
    }

    int j = 0;
    for (int i = 0; i < 100; i++) {
        if (num[i] % 2 != 0) {
           primes[j] = num[i];
           j++;
        }
    }

    printf("All the prime numbers from 0 to 100");
    for (int i = 0; i < j; i++) {
        printf("%d\n", primes[i]);
    }
    
    return 0;
}
