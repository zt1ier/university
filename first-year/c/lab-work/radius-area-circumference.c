// Sept. 17, 2025

#include <stdio.h>


/* 
Write a C program that asks the user to enter the radius of a circle.
The program should then calculate and display both the area and the circumference of the circle.
Use the following formulas:
Area = p × r²
Circumference = 2 × p × r
*/


int main() {

	const float PI = 3.141592653589;
	
	float area, circumference;
	float inputRadius;
	
	printf("Enter radius of a circle: ");
	scanf("%f", &inputRadius);
	
	area = PI * (inputRadius * inputRadius);
	circumference = 2 * PI * inputRadius;
	
	printf("\nArea of circle with that radius: %.2f", area);
	printf("\nCircumference of circle with that radius: %.2f", circumference);
	
    return 0;
}

