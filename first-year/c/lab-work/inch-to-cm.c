// September 17, 2025

#include <stdio.h>


// --- FUNCTION DECLARATIONS ---
void getData(int *a, int *b);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
void divide(int a, int b, float *quot, int *rem);
int modulo(int a, int b);
void printRes(int a, int b, int sum, int diff, int prod, float quot, int mod);


// --- MAIN ---
int main() {

    int a, b;
    int sum = 0, difference = 0, product = 0, remainder = 0;
    float quotient;

    getData(&a, &b);

    sum = add(a, b);
    difference = subtract(a, b);
    product = multiply(a, b);
    
    divide(a, b, &quotient, &remainder);

    printRes(a, b, sum, difference, product, quotient, remainder);

    return 0;
}


// --- FUNCTION DEFINITIONS ---
void getData(int *a, int *b) {
    printf("Please enter two integer numbers (separated by spaces): ");
    scanf("%d %d", a, b);
    return;
}


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}


void divide(int a, int b, float *quot, int *rem) {
    *quot = (float)a / (float)b;
    *rem = a % b;
}


void printRes(int a, int b, int sum, int diff, int prod, float quot, int rem) {
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, diff);
    printf("%d * %d = %d\n", a, b, prod);
    printf("%d / %d = %.2f\n", a, b, quot);
    printf("%d %% %d = %d\n", a, b, rem);
    return;
}
