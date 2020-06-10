#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    printf("How many hours did you work? ");
    double hours, payrate = 12.00;
    scanf("%lf", &hours);

    double finalPay = hours * payrate;
    double original = finalPay;

    if (original < 300) {
        finalPay -= (original * .15);
    }
    if (original > 300) {
        finalPay -= (300 * .15);
    }
    if (original > 450) {
        finalPay -= (150 * .20);
    }
    if (original > 450) {
        original -= 450;
        finalPay -= (original * .25);
    }

    printf("Your final pay after taxes is: %lf\n", finalPay);

    return 0;
}
