// Ryan Rosiak -> Created 6/29/20
#include "StringFunctions.h"

/* 
 * frequencyChar Function:
 * Takes a character array and a char to look for and returns
 * and integer variable containing the amount of times the 
 * search char was found in the string
 * **Must have \0 at the end of the entered string
 */
int frequencyChar(char * const string, char search) {
    int total = 0;
    for (char *cursor = string; *cursor != '\0'; cursor++) {
        if (*cursor == search) {
            total++;
        }
    }
    return total;
}

/*
 * onlyAlphabet Function:
 * Takes a character array and replaces all of the non 
 * aplhabetical characters in a string with a space
 * **Must have \0 at the end of the entered string
 */
void onlyAlphabet(char * const string) {
    for (char* cursor = string; *cursor != '\0'; cursor++) {
        if ((*cursor < 'A' && *cursor > 'Z') || (*cursor < 'a' && *cursor > 'z')) {
            *cursor = ' ';
        }
    }
}

/*
 * length Function:
 * Takes a character array and returns and integer 
 * value containing the length of the string
 */
int length(char * const string) {
    int characters = 0;
    for (char* cursor = string; *cursor != '\0'; cursor++) {
        characters++;
    }
    return characters;
}

/*
 * concat Function:
 * Takes two character arrays and concatenates the second 
 * argument to the first argument and returns a newly
 * created char array
 * **Returns a newly dynamically allocated array that must be free'd
 */
char* concat(char * const one, char * const two) {
    int newLength = length(one) + length(two) + 1;
    char *rtnMe = (char*)malloc(sizeof(char) * newLength);
    for (int i = 0; i < length(one); i++) {
        rtnMe[i] = one[i];
    }
    for (int i = length(one), j = 0; i < newLength; i++, j++) {
        rtnMe[i] = two[j];
    }
    return rtnMe;
}
