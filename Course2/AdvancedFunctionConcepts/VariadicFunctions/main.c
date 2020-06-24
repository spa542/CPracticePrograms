#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

double addingNumbers(int, ...); // Variadic Function to add as
                                    // many numbers as you want

int main() {
   
    // Testing the adding numbers variadic function
    printf("Adding 21.3 + 78.6 + 92.1, 4.0, 6.0 = %f\n", 
            addingNumbers(5, 21.3, 78.6, 92.1, 4.0, 6.0));
    
    return 0;
}

double addingNumbers(int count, ...) {
    
    va_list parg;
    va_start(parg, count);

    float sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(parg, double); 
    }

    va_end(parg);

    return sum;
}
