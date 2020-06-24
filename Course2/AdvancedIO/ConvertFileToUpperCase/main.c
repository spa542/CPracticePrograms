#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>

int main(int argc, char **argv) {

    if (argc != 2) {
        printf("Must only be two arguments present, only pass the name of the file to convert\n");
        exit(1);
    }
   
    FILE* fp = NULL;
    if ((fp = fopen(argv[1], "r+")) == NULL) {
        printf("Error opening file\n");
        exit(2);
    }

    int ch;
    FILE* writeFile = fopen("place.txt", "w+");

    while((ch = fgetc(fp)) != EOF) {
        char newChar = toupper((char)ch);
        fputc((int)newChar, writeFile);
    }
    remove(argv[1]);
    rename("place.txt", argv[1]);

    fclose(writeFile);
    fclose(fp);

    return 0;
}
