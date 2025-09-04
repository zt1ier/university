// September 4, 2025

#include <stdio.h>


int main() {

    // input: time the call started and length of the call in seconds
    // output: total cost of the call
    // rate of call per minute is 0.40 cents

    const float COST_PER_MINUTE = 0.40;
    const int SECONDS_IN_MINUTE = 60;

    float startingTime; // why is this even here
    float callLength; // in seconds
    float totalCost;

    // input
    printf("\nEnter the time the call started: ");
    scanf("%f", &startingTime); // just for input lol
    printf("Enter the length of the call (in seconds): ");
    scanf("%f", &callLength);

    // math
    totalCost = (callLength / SECONDS_IN_MINUTE) * COST_PER_MINUTE;

    // output
    printf("\n\nTotal cost of the call: %.2f", totalCost);

    return 0;
}
