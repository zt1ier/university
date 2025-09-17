// Lemeric, Fritz Gabriel M.
// September 17, 2025

#include <stdio.h>


float convert(int inches) {
    const float INCH_TO_CENTIMETER = 2.54;
    float centimeters;
    
    centimeters = (float)inches * INCH_TO_CENTIMETER;

    return centimeters;
}


int main() {

    int inches;
    float centimeters;

    printf("Input a measure in inches: ");
    scanf("%d", &inches);

    centimeters = convert(inches);

    printf("%d inches is %.2f centimeters.", inches, centimeters);

    return 0;
}
