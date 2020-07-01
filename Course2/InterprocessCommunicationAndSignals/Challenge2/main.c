#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<unistd.h>
#include<signal.h>
#include<sys/signal.h>

int main() {
    
    pid_t n1 = fork();
    // First child also executes this and creates a grandchild
    pid_t n2 = fork();

    if (n1 > 0 && n2 > 0) {
        printf("parent\n");
        printf("%d %d \n", n1, n2);
        printf(" my id is %d \n", getpid());
        printf(" my parentid is %d \n", getppid());
    } else if (n1 == 0 && n2 > 0) {
        printf("\nFirst child\n");
        printf("%d %d \n", n1, n2);
        printf(" my id is %d \n", getpid());
        printf(" my parentid is %d \n", getppid());
    } else if (n1 > 0 && n2 == 0) {
        printf("\nSecond child\n");
        printf("%d %d \n", n1, n2);
        printf(" my id is %d \n", getpid());
        printf(" my parentid is %d \n", getppid());
    } else if (n1 == 0 && n2 == 0) {
        printf("\nThird child\n");
        printf("%d %d \n", n1, n2);
        printf(" my id is %d \n", getpid());
        printf(" my parentid is %d \n", getppid());
    }

    return 0;
}
