// Illustrates the difference between arguments and parameters
//author: kbsteere

#include <stdio.h>

float x = 3.5, y = 65.11, z;

float half_of(float k);

int main(void)
{
    z = half_of(x); // x is the argument to half_of()
    printf("The value of z = %f\n", z);

    z = half_of(y); // y is the argument to half_of()
    printf("The value of z = %f\n", z);

    z = half_of(z); // z is the argument of half_of()
    printf("The value of z = %f\n", z);

    return 0;
}

float half_of(float k)
{
    // k is the parameter. Each time half_of() is called,
    // k has the value that was passed as an argument.

    return (k/2); 
}