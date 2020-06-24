#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, char **argv) {
    
    if (argc > 2) {
        printf("Too many arguments entered, either have an input file or no input at all\n");
        exit(1);
    } else if (argc == 2) {
        FILE* fp = NULL;
        if ((fp = fopen(argv[1], "r+")) == NULL) {
            printf("Error Opening file\n");
            exit(2);
        }
        int charCount = 0, ch, wordCount = 0;

        while((ch = fgetc(fp)) != EOF) {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                charCount++;
            } else {
                // Garbage
                wordCount++;
            }
        }

        printf("The number of words in the file are: %d\n", wordCount);
        printf("The number of characters in the file are: %d\n", charCount);

        fclose(fp);
    } else {
        int ch, charCount = 0, wordCount = 0;
        while((ch = getchar()) != '\n') {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                charCount++;
            } 
            if (ch == ' ') {
                wordCount++;
            }
        }
        wordCount++;

        printf("The number of words in the file are: %d\n", wordCount);
        printf("The number of characters in the file are: %d\n", charCount);
    }

    return 0;
}
