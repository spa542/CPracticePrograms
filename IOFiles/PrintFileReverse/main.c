#include<stdio.h>
#include<stdlib.h>

int main() {

    FILE* fp = NULL;
    fp = fopen("stuff.txt", "r");

    if (fp == NULL) {
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    int end_pos = ftell(fp);

    int i = 0;
    while (i < end_pos) {
        i++;
        fseek(fp, -i, SEEK_END); // Awkward function
        printf("%c", fgetc(fp));
    }
    printf("\n");
    fclose(fp);

    return 0;
}
