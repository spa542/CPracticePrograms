#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void sortStrings(char array[][100], int numOfStrings) {
    for (int i = 0; i < numOfStrings; i++) {
        for (int j = 0; j < numOfStrings - i; j++) {
            if (strcmp(array[j], array[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, array[j]);
                strcpy(array[j], array[j + 1]);
                strcpy(array[j + 1], temp);
            }
        }
    }
}

int main() {
   
    int numOfStrings; 
    printf("Enter the number of strings: ");
    scanf("%d", &numOfStrings);

    char stringArray[numOfStrings][100];
    for (int i = 0; i < numOfStrings; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", stringArray[i]);
    }

    printf("Input Strings:\n");
    for (int i = 0; i < numOfStrings; i++) {
        printf("%s\n", stringArray[i]);
    }
    
    sortStrings(stringArray, numOfStrings);

    printf("After Sort:\n");
    for (int i = 0; i < numOfStrings; i++) {
        printf("%s\n", stringArray[i]);
    }
    
    return 0;
}
