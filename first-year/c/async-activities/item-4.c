// September 03, 2025

#include <stdio.h>


int main() {

    // input price of item 1y before and its price today
    // get the inflation rate
    // output inflation rate

    float previousPrice, currentPrice;
    double inflationRate;

    printf("\nINFLATION RATE CALC (slang for calculator)\n");

    printf("\nEnter price of item a year before: ");
    scanf("%f", &previousPrice);

    printf("Enter price of item now: ");
    scanf("%f", &currentPrice);

    inflationRate = ((currentPrice - previousPrice) / previousPrice) * 100;
    // the "* 100" is converting the decimal to a percentage

    printf("\nInflation rate: %.2lf%%", inflationRate);

    return 0;
}
