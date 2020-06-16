#include<stdio.h>
#include<stdlib.h>

int main() {
    
    FILE* fp = NULL;

    fp = fopen("stuff.txt", "r");

    if (fp == NULL) {
        printf("File does not exist\n");
        return 1;
    }

    int count = 0;
    char garbage[60];

    while(fgets(garbage, 60, fp) != NULL) {
        count++;
    }

    /* Could alternatively do it this way
     * char ch;
     * while((ch = fgetc(fp)) != EOF) {
     * if (ch == '\n') count ++
     * }
     */

    printf("The number of lines in the file: %d\n", count);

    fclose(fp);

    return 0;
}
