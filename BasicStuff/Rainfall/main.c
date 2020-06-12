#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    int weather[5][12];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 12; j++) {
            weather[i][j] = 1 + rand() % 10;
        }
    }

    int year = 0;
    int total = 0;
    int subtotal = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0, subtotal = 0; j < 12; j++) {
            subtotal += weather[i][j];
        }
        printf("%d \t\t%d\n", 2010 + (++year), subtotal);
        total += subtotal;
    }
    printf("\nThe yearly average is %d inches.", total / 12);

    
    return 0;
}
