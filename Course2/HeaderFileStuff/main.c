#include<stdio.h>
#include<stdlib.h>
#include "head.h"

int main() {

    // Calling from the header/source files
    int favNum = getfavoritenumber();
    printf("%d\n", favNum);
    
    return 0;
}
