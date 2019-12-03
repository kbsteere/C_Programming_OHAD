/* receives input from user and calulates area */

#include <stdio.h>

unsigned int length, width;
long area;

struct coord{
	unsigned int x;
	unsigned int y;
};

struct rectangle{
	struct coord topleft;
	struct coord bottomrt;
} mybox;

int main (void)
{
	printf("\nEnter the top left x coordinate: ");
	scanf("%d", &mybox.topleft.x);

	printf("\nEnter the top left y coordinate: ");
	scanf("%d", &mybox.topleft.y);

	printf("\nEnter the bottom right x coordinate: ");
	scanf("%d", &mybox.bottomrt.x);

	printf("\nEnter the bottom right y coordinate: ");
	scanf("%d", &mybox.bottomrt.y);

	/* Calculate the length and width */

	width = mybox.bottomrt.x - mybox.topleft.x;
	length = mybox.topleft.y - mybox.bottomrt.y;

	/* calculate and display the area  */

	area = width * length;
	printf("\nThe area is %ld units.\n", area);

	return 0;
}
