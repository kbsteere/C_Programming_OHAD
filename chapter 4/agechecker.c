// Demonstrates if statements and some of C's relational operators
#define CURRENT_YEAR 2018
#include <stdio.h>

int iBirthYear, iAge; //  many programmers put a lowercase letter for the data-type in front of the variable name. 

int main(int argc, char const *argv[])
{
    printf("Enter the year you were birth: ");
    scanf("%d", &iBirthYear);

    // Two conditional tests to calculate if the user was a born in a leap year
    // This is different than what is in the book. 
    if (iBirthYear % 4 == 0) {
        printf("You were born in a leap year!\n");
    } else {
        printf("You were NOT born in a leap year!\n");
    }

    iAge = CURRENT_YEAR - iBirthYear;

    // Also can check other expressions
    if (iAge >= 18) printf("You can vote this year!\n");
    if (iAge <= 21) printf("It is illegal for you to drink alchol!\n");

    return 0;
}

