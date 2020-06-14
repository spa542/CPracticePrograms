#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int num = 10;
    int *pnum = NULL;
    pnum = &num;

    printf("The address of the pointer: %p\n", (void*)&pnum);
    printf("The pointer value itself: %p\n", pnum);
    printf("The value that the pointer points to: %d\n", *pnum);

    return 0;
}
