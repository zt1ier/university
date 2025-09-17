// Sept. 17, 2025

#include <stdio.h>


/* 
Write a C program that asks the user to 
enter the price and quantity for three different products. 
The program should calculate the total cost for each product (price × quantity) 
and then display these amounts along with the overall total cost of all products.
*/


int main() {

    float price1, price2, price3;
    int quantity1, quantity2, quantity3;
    float total1, total2, total3, overall;

    printf("Enter price and quantity for item 1 (separated by spaces): ");
    scanf("%f %d", &price1, &quantity1);

    printf("Enter price and quantity for item 2 (separated by spaces): ");
    scanf("%f %d", &price2, &quantity2);

    printf("Enter price and quantity for item 3 (separated by spaces): ");
    scanf("%f %d", &price3, &quantity3);

    total1 = price1 * quantity1;
    total2 = price2 * quantity2;
    total3 = price3 * quantity3;
	overall = total1 + total2 + total3;

    printf("\nTotal price for item 1: %.2f", total1);
    printf("\nTotal price for item 2: %.2f", total2);
    printf("\nTotal price for item 3: %.2f", total3);
  printf("\nOverall price: %.2f\n", overall);

    return 0;
}

