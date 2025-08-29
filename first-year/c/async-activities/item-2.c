// August 29, 2025

#include <stdio.h>


int main() {

    // 7.6% retroactive pay for the past 6 months
    // input: previous annual salary
    // output: amount of retroactive pay, new monthly salary, and new annual salary

    const float retroactiveIncrease = 0.076; // 7.6%
    const int pastMonths = 6;

    float prevAnnualSalary, newMonthlySalary, newAnnualSalary, retroactivePayDue, retroactivePayAmount;

    printf("\nEnter previous annual salary: ");
    scanf("%f", &prevAnnualSalary);

    retroactivePayDue = (prevAnnualSalary * retroactiveIncrease) * pastMonths;

    retroactivePayAmount = prevAnnualSalary + retroactivePayDue;

    newMonthlySalary = prevAnnualSalary + (prevAnnualSalary * retroactiveIncrease);
    newAnnualSalary = newMonthlySalary * 12;

    printf("\nRetroactive pay next payroll: %.2f", retroactivePayAmount);

    printf("\nNew annual salary: %.2f", newAnnualSalary);
    printf("\nNew monthly salary: %.2f", newMonthlySalary);

    return 0;
}
