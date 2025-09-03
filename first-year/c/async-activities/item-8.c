// September 4, 2025

#include <stdio.h>


int main() {

    const float KILOGRAM_TO_POUNDS = 2.2046;
    const float POUNDS_TO_OUNCES = 16.0;
    const float KILOGRAM_TO_GRAMS = 1000.0;

    float inputPounds, inputOunces;
    float totalPounds, totalKilograms;
    
    int kgPart;
    float gramsPart;

    printf("\n----- POUNDS (LB) and OUNCES (OZ) to KILOGRAMS (KG) and GRAMS (G) -----\n");

    // input
    printf("\nEnter weight in pounds (lb): ");
    scanf("%f", &inputPounds);
    printf("Enter weight in ounces (oz): ");
    scanf("%f", &inputOunces);

    // combine and convert
    totalPounds = inputPounds + (inputOunces / POUNDS_TO_OUNCES);
    totalKilograms = totalPounds / KILOGRAM_TO_POUNDS;

    // split into kg and g
    kgPart = (int)totalKilograms;
    gramsPart = (totalKilograms - kgPart) * KILOGRAM_TO_GRAMS;

    // output
    printf("\n%.2f lb and %.2f oz = %d kg and %.2f g.\n",
           inputPounds, inputOunces, kgPart, gramsPart);

    return 0;
}
