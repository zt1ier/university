// Sept. 17, 2025

#include <stdio.h>


/* 
Write a C program that asks the user to enter a time value in seconds.
The program should then convert this value into hours, minutes, and seconds,
and display the equivalent time in that format. For example, if the user
enters 3672, the output should be:1 hour(s), 1 minute(s), and 12 second(s)
*/


int main() {

	const int SECONDS_TO_MINUTES = 60;
	const int SECONDS_TO_HOURS = 3600;
	
	int inputSeconds, remainderSeconds;
	int hours, minutes;

	printf("Enter time in seconds: ");
	scanf("%d", &inputSeconds);
	
	hours = inputSeconds / SECONDS_TO_HOURS;
	remainderSeconds = inputSeconds % SECONDS_TO_HOURS;
	
	minutes = remainderSeconds / SECONDS_TO_MINUTES;
	remainderSeconds = remainderSeconds % SECONDS_TO_MINUTES;
	
	printf("%d hour(s), %d minute(s), and %d second(s)", hours, minutes, remainderSeconds);
	
    return 0;
}

