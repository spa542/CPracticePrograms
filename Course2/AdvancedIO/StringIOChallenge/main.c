#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, char **argv) {
   
    if (argc != 3) {
        puts("Must enter 3 arguments, (program) (char to search for) (file to read in)");
        exit(1);
    }

    FILE* fp = NULL;
    if ((fp = fopen(argv[2], "r+")) == NULL) {
        puts("Error opening file");
        exit(2);
    }

    char *buffer = NULL;
    size_t bufSize = 256;
    
    printf("Printing out every occcurence of %s\n", argv[1]);
    while(getline(&buffer, &bufSize, fp) >= 0) {
        char* cursor = buffer;
        char yeet = argv[1][0];
        while(*cursor) {
            if (*cursor == yeet) {
                printf("%s", buffer);
                break;
            }
            cursor++;
        }
    }
    free(buffer);
    fclose(fp);

    return 0;
}
