// arraystruct.c
// A structure that has array members

#include <stdio.h>
#define NAMESIZE 30

// Define and declare a strcture to hold data
// It contains one float variable and two char arrays
struct data {
	float amount;
	char fname[NAMESIZE];
	char lname[NAMESIZE];
} rec;

int main( void )
{
	// input data from keyboard
	printf("Enter the donor's first and last names, \n");
	printf("separated by a space: ");
	scanf("%s %s", rec.fname, rec.lname);

	printf("\nEnter the donation amount: ");
	scanf("%f", &rec.amount);

	// Display the information
	// NOTE: %.2f specifies a floating-point value

	printf("\nDonor %s %s gave $%.2f.\n", rec.fname, rec.lname, rec.amount);

	return 0;
}

