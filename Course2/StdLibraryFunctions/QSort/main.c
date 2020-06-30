#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LENGTH 10

void fill_array(double*, int);
void show_array(double*, int);
int swap(const void*, const void*);

int main() {
    srand(time(NULL));

    double yeet[LENGTH];
    fill_array(yeet, LENGTH);
    puts("Before sort:");
    show_array(yeet, LENGTH);

    qsort(yeet, LENGTH, sizeof(double), &swap);

    puts("After sort:");
    show_array(yeet, LENGTH);

    return 0;
}

void fill_array(double *array, int length) {
    for (int i = 0; i < length; i++) {
        array[i] = (double)(1 + rand() % 25);
    }
}

void show_array(double *array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%f ", array[i]);
    }
    printf("\n");
}

int swap(const void* one, const void* two) {
    double *first = (double*)one, *second = (double*)two;
    if (*first > *second) {
        return 1;
    }
    return -1;
}
