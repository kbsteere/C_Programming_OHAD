// This is a refractored version of the code to make it smaller and more clean
// Demonstrates if statements and some of C's relational operators
#define CURRENT_YEAR 2018
#include <stdio.h>

int iBirthYear, iAge; //  many programmers put a lowercase letter for the data-type in front of the variable name. 

int main(int argc, char const *argv[])
{
    printf("Enter the year you were birth: ");
    scanf("%d", &iBirthYear);

    // Using the ternary operator we can simplify the if statement into one statement.
    // This is different than what is in the book. 
    iBirthYear % 4 == 0 ? printf("You were born in a leap year!\n") : printf("You were NOT born in a leap year!\n");
    
    iAge = CURRENT_YEAR - iBirthYear;

    // Also can check other expressions
    iAge >= 18 ? printf("You can vote this year!\n") : printf("You can't vote this year\n");
    iAge <= 21 ? printf("It is illegal for you to drink alchol!\n") : printf("You can legally drink alchol!\n");

    return 0;
}

