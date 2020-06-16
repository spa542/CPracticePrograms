#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
    
    FILE* readFile = NULL;
    FILE* writeFile = NULL;
    char ch;

    readFile = fopen("edit.txt", "r");
    writeFile = fopen("default.txt", "w+");

    while((ch = fgetc(readFile)) != EOF) {
        char insert;
        if (islower(ch)) {
            insert = toupper(ch); 
        } else {
            insert = ch;
        }
        fputc(insert, writeFile);
    }
    remove("edit.txt");
    rename("default.txt", "edit.txt");

    fclose(readFile);
    fclose(writeFile);

    return 0;
}
