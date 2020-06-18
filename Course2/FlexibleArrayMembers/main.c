#include<stdio.h>
#include<stdlib.h>

struct MyArray {
    int sizeOfArray;
    int array[];
};

typedef struct MyArray MyArray;

void fillArray(MyArray* ptr) {
    for (int i = 0; i < ptr->sizeOfArray; i++) {
        ptr->array[i] = i;
    }
}

int main() {

    int inputSize;
    printf("Enter the size of the array: ");
    scanf("%d", &inputSize);

    MyArray* ptr = malloc(sizeof(MyArray) + inputSize * sizeof(int));
    ptr->sizeOfArray = inputSize;

    fillArray(ptr);

    printf("Contents of the array:\n");
    for (int i = 0; i < inputSize; i++) {
        printf("%d\n", ptr->array[i]);
    }

    free(ptr);

    return 0;
}
