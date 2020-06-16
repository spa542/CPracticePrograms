#include<stdio.h>
#include<stdlib.h>

int calcLength(char *string) {
    char* cursor = string;
    int count = 0;
    while(*cursor) {
       count++; 
       cursor++;
    }
    return count;
}

int main() {

    char sentence[150];
    
    printf("Enter a string: ");
    scanf("%[^\n]", sentence);
    printf("The length of the string that you entered is %d\n", calcLength(sentence));

    return 0; 
}
