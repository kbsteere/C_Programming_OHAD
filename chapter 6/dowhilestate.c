#include <stdio.h>
#include <ctype.h>
int get_menu_choice(void);
int test_get_menu_choice(void);

int main(void)
{
	int choice = get_menu_choice();

	printf("You chose Menu option %d\n", choice);
	return 0;
}


// TODO: add check to exit or ignore non-integer values
int get_menu_choice(void)
{
	int selection = 0;
	do {
		printf("\n");
		printf("\n1 - Add a record");
 		printf("\n2 - Change a record");
		printf("\n3 - Delete a record");
		printf("\n4 - Quit");
		printf("\n");
		printf("\nEnter a selection: ");

		scanf("%d", &selection);

	} while(selection < 1 || selection > 4);
	return selection;
}

// TODO: write test case with letters and other characters.
int test_get_menu_choice(void)
{
	char values[] = {'a', 100, NULL, '!', '.', -1, 0};
}
