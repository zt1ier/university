// September 03, 2025

#include <stdio.h>


int main() {

    // input number between 1 to 99 (cents)
    // get the quarters (25 cents), dimes (10 cents), and pennies (1 cent)
    // basically you are cashier and you give money change to customer
    // output that change

    const int oneQuarter = 25;
    const int oneDime = 10;

    int input, quarters, dimes, pennies, remainder;

    printf("\nEnter 1 to 99 cents: ");
    scanf("%d", &input);

    quarters = input / oneQuarter;
    remainder = input % oneQuarter;

    dimes = remainder / oneDime;
    remainder = remainder % oneDime;

    pennies = remainder;

    // modulo operator (%) gets the remainder when dividing

    printf("\n%d cents can be given as", input);
    printf("\n%d quarter(s) %d dime(s) and %d penny (pennies)", quarters, dimes, pennies);

    return 0;
}
