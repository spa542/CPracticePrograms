#include<stdio.h>
#include<stdlib.h>

static double var = 6.0; // Only accessible in this file
float var2 = 7.0; // Accessible anywhere including outside of file

static void yeet(void) { // Only accessible within this file
    return;
}


int main() {
  
    {
        int x = 1; // Block scope
    }

    static float var3; // Permanent storage float variable

    register int g = 6; // Recommends to compiler to use register instead of RAM




    return 0;
}
