// A simple for statement
#include <stdio.h>

#define MAXCOUNT 40
int count;

int main (void) 
{
    // Print the numbers 1 through 40
    for (count = 1; count <= MAXCOUNT; count++)
    {
        printf("%d\n", count);
    }
}
