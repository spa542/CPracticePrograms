#include<stdio.h>
#include<stdlib.h>

int main() {
    printf("Enter the number of minutes to convert: ");
    int minutes;
    scanf("%d", &minutes);

    double days = minutes / (60.0 * 24.0);
    double years = minutes / (60.0 * 24.0 * 365.0);

    printf("Minutes entered: %d\n", minutes);
    printf("Amount of days: %f\n", days);
    printf("Amount of years: %f\n", years);

    return 0;
}
