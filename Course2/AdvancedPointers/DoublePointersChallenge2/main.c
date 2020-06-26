#include<stdio.h>
#include<stdlib.h>

void allocateMemory(int **ptr) {
    *ptr = (int*)malloc(sizeof(int) * 20);

}

int main() {
   
    int *ptr = NULL;
    allocateMemory(&ptr);
    
    ptr[0] = 5;

    printf("Value of the first entry = %d\n", ptr[0]);

    free(ptr);

    return 0;
}
