// September 17, 2025

#include <stdio.h>


int getNum(int num) {
    scanf("%d", &num);
    return num;
}


void printForward(int x, int y, int z) {
    printf("\nForward: %d, %d, %d", x, y, z);
    return;
}


void printReversed(int x, int y, int z) {
    printf("\nReversed: %d, %d, %d", z, y, x);
    return;    
}


int main() {

    int x, y, z;

    printf("Input the first integer: ");
    x = getNum(x);

    printf("Input the second integer: ");
    y = getNum(y);

    printf("Input the third integer: ");
    z = getNum(z);

    printForward(x, y, z);
    printReversed(x, y, z);

    return 0;
}
