#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int num, checkBit, bitStatus;
    printf("Enter any integer: ");
    scanf("%d", &num);
    printf("Enter nth bit to check and set (0-31): ");
    scanf("%d", &checkBit);

    bitStatus = (num >> checkBit) & 1; // Reading the bit with a bitmask
    printf("The %d bit is set to %d\n", checkBit, bitStatus);

    int newNum = (1 << checkBit) | num; // Writing the bit with a bitmask
    printf("\nBit set successfully.\n\n");

    printf("Number before setting %d bit: %d (in decimal)\n", checkBit, num);
    printf("Number after setting %d bit: %d (in decimal)\n", checkBit, newNum);
    
    return 0;
}
