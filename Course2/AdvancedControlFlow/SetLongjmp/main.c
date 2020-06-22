#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>
#include<stdbool.h>

jmp_buf buffer; // Global buffer variable

void error_recovery() {
    printf("Error Occured, sending you back to the main loop\n");
    longjmp(buffer, -1);
}

int main() {

    int input;
    
    while (true) {
        int i = setjmp(buffer);
        printf("Enter a number to divide 5 by (-1 to leave): ");
        scanf("%d", &input);

        if (input == -1) {
            break;
        } else if (input == 0) {
            error_recovery(); 
        }
        printf("That is a valid number :)\n");
    }
     
    return 0;
}
