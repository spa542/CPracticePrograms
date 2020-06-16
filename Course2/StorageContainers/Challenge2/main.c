#include<stdio.h>
#include<stdlib.h>

int sum(int num) {
    static int total = 0;
    total += num;
    return total;
}

int main() {
   
     
    printf("%d\n", sum(25));
    printf("%d\n", sum(15));
    printf("%d\n", sum(30));

    return 0;
}
