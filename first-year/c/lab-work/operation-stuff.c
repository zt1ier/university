// August 20, 2025

#include <stdio.h>


int main() {
    float num1;
    float num2;
    char operation;
    float result;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("You entered: %.2f\n", num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("You entered: %.2f\n", num2);
    
    printf("Enter an operation (+, -, *, /): ");
    scanf("%s", &operation);
    printf("Operation entered: %c\n", operation);

    
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
            
        case '-':
            result = num1 - num2;
            break;
            
        case '*':
            result = num1 * num2;
            break;
            
        case '/':
        result = num1 / num2;
            break;
            
        default:
            printf("Invalid operation");
            break;
    }
    
    printf("Result is: %.2f", result);

    return 0;
}
