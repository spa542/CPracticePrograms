#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

typedef int calc(int, int);

int main() {

    calc *yeet = NULL;
    int input;
    
    while(true) {
        do {
            puts("Values are 5 and 7");
            printf("Which operation do you want to perform? (Enter a number): \n");
            puts("1. Add");
            puts("2. Subtract");
            puts("3. Multiply");
            puts("4. Divide");
            puts("5. Exit");
            scanf("%d", &input);
        } while(input < 1 || input > 5);

        switch (input) {
            
            case 1: yeet = &add; break;
            case 2: yeet = &subtract; break;
            case 3: yeet = &multiply; break;
            case 4: yeet = &divide; break;
            case 5: puts("Bye\n"); exit(0);
        }
        printf("Result: %d\n", (*yeet)(5, 7));
    }

    return 0;
}
