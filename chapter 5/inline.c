// shows an inline c function
// author: kbsteere

#include <stdio.h>

static inline int toInches(int feet)
{
    return (feet*12);
}

int main(void)
{
    int feet = 12;
    printf("Feet to inches = %d", toInches(feet));
    return 0;
}

