#include<stdio.h>
#include<stdlib.h>

int counter = 0;

extern void display(void);

int main() {
    
    for (int i = counter; i < 5; i++) {
        display();
    }

    return 0;
}
