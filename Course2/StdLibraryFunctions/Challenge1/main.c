#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 50; i++) {
        printf("Rand(): %lf\n", -0.5 + rand() % 2);
    }

    return 0;
}
