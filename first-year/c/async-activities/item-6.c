// September 4, 2025

#include <stdio.h>


int main() {

    // input: beginning balance
    // output: balance at the end of the year
    // interest of 3.5% compounded quarterly

    const float interestRate = 0.035; // 3.5%
    const int compoundingPeriods = 4; // quarterly = 4

    float beginningBalance, previousBalance, currentBalance, endingBalance;
    float quarterlyInterest;

    // input
    printf("\nCurrent bank balance: ");
    scanf("%f", &beginningBalance);

    // math
    quarterlyInterest = interestRate / compoundingPeriods;

    endingBalance = beginningBalance + (beginningBalance * quarterlyInterest);    // quarter 1
    endingBalance = endingBalance + (endingBalance * quarterlyInterest);          // quarter 2
    endingBalance = endingBalance + (endingBalance * quarterlyInterest);          // quarter 3
    endingBalance = endingBalance + (endingBalance * quarterlyInterest);          // quarter 4
    // no for-loop, hardcoding hurts :(

    // output
    printf("\nBalance at the end of 1 year with a %.1f%% quarterly compound interest: %.2f", 
        interestRate * 100, endingBalance);

    return 0;
}
