// *August 29, 2025* September 4, 2025

#include <stdio.h>


int main() {
    
    const float retroactiveIncrease = 0.076; // 7.6%
    const int pastMonths = 6;

    float prevAnnualSalary, newAnnualSalary, newMonthlySalary, retroactivePay;

    printf("\nEnter previous annual salary: ");
    scanf("%f", &prevAnnualSalary);

    newAnnualSalary = prevAnnualSalary * (1 + retroactiveIncrease);
    newMonthlySalary = newAnnualSalary / 12;

    // calculate retroactive pay
    retroactivePay = (newAnnualSalary - prevAnnualSalary) / 12 * pastMonths;

    printf("\nRetroactive pay next payroll: %.2f", retroactivePay);
    printf("\nNew annual salary: %.2f", newAnnualSalary);
    printf("\nNew monthly salary: %.2f\n", newMonthlySalary);

    return 0;
}
