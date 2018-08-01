#include <stdio.h>
#define TARGET_AGE 88

int year1, year2;

int calcYear(int year);

int main(void)
{
  // Ask user for their birth year
  printf("What year were you or the subject born?\n");
  printf("Enter as a 4-digit year (YYYY): ");
  scanf(" %d", &year1);

  // Calculate the future year and display it 
  year2 = calcYear(year1);

  printf("Someone born in %d will be %d in %d.\n", year1, TARGET_AGE, year2);

 return 0;
}

// calcYear function to get future year
int calcYear(int year1)
{
  return (year1+TARGET_AGE);
}
