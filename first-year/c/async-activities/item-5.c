// September 03, 2025

#include <stdio.h>


int main() {

    // input price of item 1y before and its price today
    // get the inflation rate
    // output inflation rate

    // *NEW* (item 5)
    // output price of item one and two years from now using inflation rate

    float previousPrice, currentPrice;
    double inflationRate;

    // *NEW* (item 5)
    float priceInOneYear, priceInTwoYears;

    printf("\nINFLATION RATE CALC (slang for calculator)\n");

    printf("\nEnter price of item a year before: ");
    scanf("%f", &previousPrice);

    printf("Enter price of item now: ");
    scanf("%f", &currentPrice);

    inflationRate = ((currentPrice - previousPrice) / previousPrice); // * 100;

    // *NEW* (item 5)
    priceInOneYear = currentPrice + (currentPrice * inflationRate);
    priceInTwoYears = priceInOneYear + (priceInOneYear * inflationRate);

    inflationRate *= 100;
    // did the "* 100" thing here so the priceIn#Year uses fraction
    // like it uses 0.10 instead of 10 which is a big number

    printf("\nInflation rate: %.2lf%%", inflationRate);

    // *NEW* (item 5)
    printf("\n\nIf this rate persists:");
    printf("\nPrice in one year: %.2f", priceInOneYear);
    printf("\nPrice in two years: %.2f", priceInTwoYears);

    return 0;
}
