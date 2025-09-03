// September 03, 2025

#include <stdio.h>


int main() {

    // input liters and miles travelled
    // convert liters -> gallons; get miles travelled per gallon (miles divided by gallons)
    // output miles per gallon car delivered

    const float literToGallons = 0.264179; // 1 liter = 0.264179 gallons
    
    float litersConsumedByCar, milesTravelled; // input
    float gallons, milesPerGallon; // output

    printf("\nEnter liters consumed by car: ");
    scanf("%f", &litersConsumedByCar);

    printf("\nEnter miles travelled: ");
    scanf("%f", &milesTravelled);

    gallons =  litersConsumedByCar * literToGallons;
    
    milesPerGallon = milesTravelled / gallons;

    printf("\nMiles per gallon the car delivered: %.2f\n", milesPerGallon);

    return 0;
}
