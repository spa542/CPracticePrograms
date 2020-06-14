#include<stdio.h>
#include<stdlib.h>

int main() {
   
    int limit;
    char temp;
    printf("How many characters are you planning to enter in the string? ");
    scanf("%d", &limit);
    scanf("%c", &temp);

    char* string = (char*)malloc(sizeof(char) * limit);
    printf("Please enter a string of text: \n");
    scanf("%[^\n]", string);

    char* cursor = string;
    printf("The string that you entered was ");
    while(*cursor) {
        printf("%c", *cursor);
        cursor++;
    }
    
    free(string);
    return 0;
}
