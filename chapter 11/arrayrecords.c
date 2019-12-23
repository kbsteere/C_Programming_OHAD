// demonstrates the use of an array structure
#include <stdio.h>

// defines a structure to hold entries
struct entry {
	char fname[20];
	char lname[20];
	char phone[13];
};

// declare the array struct
struct entry list[4];

int i; // global int

int main( void )
{
	for (i = 0; i < 4; i++)
	{
		printf("\nEnter first name: ");
		scanf("%s", list[i].fname);
		printf("Enter last name: ");
		scanf("%s", list[i].lname);
		printf("Enter phone in 123-456-7890 format:");
		scanf("%s", list[i].phone);
	}

	printf("\n\n");

	for (i = 0; i < 4; i++)
	{
		printf("Name: %s %s", list[i].fname, list[i].lname);
		printf("\t\tPhone: %s\n", list[i].phone);
	}

	return 0;
}
