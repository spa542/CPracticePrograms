#include<stdio.h>
#include<stdlib.h>

void readElements(int array[], int size) {
    int sum = 0;
    int temp;
    for (int i = 0; i < size; i++) {
        printf("Enter input: ");
        scanf("%d", &temp);
        sum += temp;
    }
    printf("The sum of the array elements that were entered is: %d", sum);
}

int main() {
    int size;
    
    printf("Please enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];

    readElements(array, size);

    return 0;
}
