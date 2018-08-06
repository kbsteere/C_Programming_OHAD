// Demonstrates variables and constants
#include <stdio.h>

// Define a constant to convert a number of laps to miles
#define LAPS_PER_MILE 4

// Define a constant for the current year
const int CURRENT_YEAR = 2018;

// Declare the needed cariables 
float milesCovered;
int lapsRun, yearOfBirth, currentAge;

int main(void)
{
	// Input data from user
	printf("How many laps did you run: ");
	scanf("%d", &lapsRun);
	printf("Enter your year of birth: ");
	scanf("%d", &yearOfBirth);
	
	// Perform conversions
	milesCovered = (float)lapsRun/LAPS_PER_MILE;
	currentAge = CURRENT_YEAR - yearOfBirth;
	
	// Display results to the terminal
	printf("\nYou ran %.2f miles.", milesCovered);
	printf("\nNot bad for someone turning %d this year:\n", currentAge);

	return 0;
}
