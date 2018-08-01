//KBS: Asks user for entry, doesn't perform any validation checking for int vs float vs double. 
//KBS: multiples PI to the radius twice.
#include<stdio.h>

int radius, area;

int main(void)
{
  printf("Enter radius (i.e. 10): ");
  scanf("%d", &radius);
  area = (int)(3.14159 * radius * radius);
  printf("\nArea = %d\n", area);
  return 0;
}
