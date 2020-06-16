#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* string) {
    for (int i = strlen(string); i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");
}

int main() {

    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    printf("The string you entered in reverse order is:\n");
    reverse(input);

    return 0;
}
