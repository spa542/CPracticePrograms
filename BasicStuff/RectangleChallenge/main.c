#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc, char** argv) {
    if (argc != 3) {
        exit(1);
    }
    
    double length = atoi(argv[1]);
    double width = atoi(argv[2]);

    double perimeter = (length * 2) + (width * 2);
    double area = length * width;

    printf("Length: %g Width: %g Perimeter: %g Area: %g\n", length, width, perimeter, area);

    return 0;
}
