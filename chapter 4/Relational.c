// Demonstrates the evaluation of relational expressions
#include <stdio.h>

int a;

int main(int argc, char const *argv[])
{
    a = (5 == 5); // Evaluates to 1;
    printf("\na = (5 == 5)\na = %d", a);

    a = (5 != 5); // Evalutes to 0;
    printf("\na = (5 != 5)\na = %d", a);

    a = (12 == 12) + (5 != 1); // evalutes to 2
    printf("\na = (12 == 12) + (5 != 1)\na = %d", a);
    return 0;
}
