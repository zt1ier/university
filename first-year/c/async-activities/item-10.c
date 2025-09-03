// September 03, 2025

#include <stdio.h>


int main() {

    // input random 4 digit int
    // output digits in reverse order separately
    // example: 1234
    // prints 4 3 2 1 (in different lines)
    // hint: use / and % operators (divide and modulo)

    int number;

    printf("\nEnter four digit integer: ");
    scanf("%d", &number);

    // divide by 10 because base-10 number system

    printf("%d\n", number % 10);        // last digit
    number = number / 10;

    printf("%d\n", number % 10);        // third digit
    number = number / 10;

    printf("%d\n", number % 10);        // second digit
    number = number / 10;

    printf("%d\n", number);             // first digit

    return 0;
}
