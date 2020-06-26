#include<stdio.h>
#include<stdlib.h>

int main() {
   
    int i = 5;
    int* ip = NULL;
    int** ipp = NULL;
    ip = &i;
    ipp = &ip;

    printf("Value is %d\n", i);
    printf("Value is also %d\n", *ip);
    printf("value is even more so %d\n", **ipp);

    return 0;
}
