//TODO: program should be updated so that if you enter a value that is incorrect for one of the values
//      it informs the user and let's them re-enter the data.
#include <stdio.h>

#define QUIT 4

int get_menu_choice(void);

int main(void)
{
    int choice = 0, int_var = 0;
    float float_var = 0.0;
    unsigned unsigned_var = 0;

    do {
        choice = get_menu_choice();
        if(choice == 1)
        {
            puts("\nEnter a signed decimal integer (i.e. -123)");
            scanf("%d", &int_var);
        }
        if (choice == 2)
        {
            puts("\nEnter a decimal floating-point number\
            (e.g. 1.23)");
            scanf("%f", &float_var);
        }
        if (choice == 3)
        {
            puts("Enter an unsigned decimal integer \
            (e.g. 123)");
            scanf("%u", &unsigned_var);
        }
        if (choice > 3 || choice < 1)
        {
            puts("The option you entered was invaild!");
        }
        
    }while(choice != QUIT);
    printf("\nYour values are: int: %d float: %f unsigned: %u \n", int_var, float_var, unsigned_var);
    return 0;
}

int get_menu_choice(void)
{
    int selection = 0;
    do
    {
        puts("\n1 - Get signed decimal integer");
        puts("2 - Get a decimal floating-point number");
        puts("3 - Get an unsigned decimal integer");
        puts("4 - Quit");
        puts("\nEnter a selection: ");

        scanf("%d", &selection);
    }while (selection < 1 || selection > 4);
    return selection;
}