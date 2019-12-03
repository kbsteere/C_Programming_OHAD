/* simplestruct.c - demonstrates the use of a single structure */

#include <stdio.h>

int length, width;
long area;

struct coord{
	int x;
	int y;
} MYPOINT;

int main (void)
{
	MYPOINT.x = 12;
	MYPOINT.y = 14;

	printf("\nThe coordinates are: (%d, %d).\n", MYPOINT.x, MYPOINT.y);

	return 0;
}
