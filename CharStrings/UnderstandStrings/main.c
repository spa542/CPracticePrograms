#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int stringLength(char* string) {
    int charNum = 0;
    for (char *i = &string[0]; *i != '\0'; i++) {
        charNum++; 
    }
    return charNum;
}

char* concatenate(char* string1, char* string2) {
    int newLength = strlen(string1) + strlen(string2) + 1;
    char *rtnMe = malloc(sizeof(char) * newLength);
    for (int i = 0; i < strlen(string1); i++) {
        rtnMe[i] = string1[i]; 
    }
    for (int i = strlen(string1), j = 0; i < newLength; i++, j++) {
        rtnMe[i] = string2[j];
    }
    return rtnMe;
}

bool isStrEqual(char* string1, char* string2) {
    if (strlen(string1) != strlen(string2)) {
        return false;
    }

    for (int i = 0; i < strlen(string1); i++) {
        if (string1[i] != string2[i]) {
            return false;
        }
    }
    return true;
}

int main() {

    char str1[] = "hello";
    char str2[] = "Hiya buddy boy";
    char str3[] = "yaga";

    char* deleteMe = concatenate(str1, str3);
    printf("The string length of %s is: %d\n", str1, stringLength(str1));
    printf("The concatenation of %s and %s is: %s\n", str1, str3, deleteMe);
    printf("The string %s and %s are equal? %i\n", str1, str1, isStrEqual(str1, str1));

    free(deleteMe);
    return 0; 
}
