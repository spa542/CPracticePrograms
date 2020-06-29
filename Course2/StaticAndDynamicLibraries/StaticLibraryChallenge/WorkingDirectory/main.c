#include<stdio.h>
#include<stdlib.h>
#include "StringFunctions.h" // Include normally, must link at compile time

int main() {
   
    char string[] = "Yo bro, how you doing buddy!";

    printf("Current string: %s\n", string);
    printf("Frequency of the character 'o': %d\n", frequencyChar(string, 'o'));
    printf("Length of the string: %d\n", length(string));
    onlyAlphabet(string);
    printf("Only alphabet characters shown: %s\n", string);

    char str1[] = "Hiya!";
    char str2[] = "Why hello there!";
    printf("String one: %s\n", str1);
    printf("String two: %s\n", str2);
    char* output = concat(str1, str2);
    printf("Concatenated output: %s\n", output);

    free(output);

    return 0;
}
