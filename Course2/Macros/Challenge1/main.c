#include<stdio.h>
#include<stdlib.h>

void print() {
    printf("The function that was called is %s\n", __func__);
}

int main() {
    
    FILE* dummy = NULL;

    if (!(dummy = fopen("yeet.txt", "r"))) {
        fprintf(stderr, "The file that did not open was %s and the line that errored is %d\n", __FILE__, __LINE__);
    }

    printf("The date last compiled: %s\n", __DATE__);
    printf("The time last compiled: %s\n", __TIME__);
    if (__STDC__) {
        puts("Iso conforming");
    }
    return 0;
}
