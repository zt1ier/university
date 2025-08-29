// August 29, 2025

#include <stdio.h>


int main() {

    // 1 mt = 35,273.92 oz
    // input: weight of 1 box of cereal in oz
    // output: weight of 1 box of cereal in mt, number of boxes for one mt of cereal

    const float metricTon = 35273.92;

    float inputOz, outputTons;
    int boxesNeeded;

    printf("\nInput weight of 1 box of cereal (in ounces): ");
    scanf("%f", &inputOz);

    outputTons = inputOz / metricTon;
    boxesNeeded = 1 / outputTons;
    // or: boxesNeeded = metricTon / inputOz

    printf("\nMetric tons (t) of 1 box of cereal:'%f'", outputTons);
    printf("\nBoxes of cereal needed for 1 metric ton (t): '%d'", boxesNeeded);

    return 0;
}
