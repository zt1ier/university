// August 20, 2025

#include <stdio.h>


int main() {
    char code1 = 'A';
    char code2 = 'B';
    char code3 = 'C';
    
    float price1 = 1000.0;
    float price2 = 5975.90;
    float price3 = 900.25;
    
    printf("no table:\n\n");
    
    printf("Code\tDescription\t\tPrice\n");
    printf("%c\t\tBag\t\t\t\t%.2f\n", code1, price1);
    printf("%c\t\tCabinet\t\t\t%.2f\n", code2, price2);
    printf("%c\t\tJeans\t\t\t%.2f", code3, price3);
    
    printf("\n\n\n\n");
    
    printf("yes table:\n\n");
    
    printf("Code\t|\tDescription\t|\tPrice\n");
    printf("——————————————————————————————————\n");
    printf("%c\t\t|\tBag\t\t\t|\t%.2f\n", code1, price1);
    printf("%c\t\t|\tCabinet\t\t|\t%.2f\n", code2, price2);
    printf("%c\t\t|\tJeans\t\t|\t%.2f", code3, price3);

    return 0;
}
