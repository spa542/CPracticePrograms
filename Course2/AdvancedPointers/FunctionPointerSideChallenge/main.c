#include<stdio.h>
#include<stdlib.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int callOperations(int (*func)(int, int), int param1, int param2) {
    return func(param1, param2);    
}

int main() {
    // Passing a function as a pointer parameter 
    
    puts("Calling add function through callOperations");
    printf("5 + 7 is %d\n", callOperations(&add, 5, 7));
    puts("Calling subtract function through callOperations");
    printf("5 - 7 is %d\n", callOperations(&subtract, 5, 7));


    return 0;
}
