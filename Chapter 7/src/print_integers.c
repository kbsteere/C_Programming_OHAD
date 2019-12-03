#include <stdio.h>

int main(void)
{
    int integer_val[7] = { 0 }; // if set to 6, we have issues with stack smashing
    puts("\nEnter the number 99 to stop the program");

    for (int count = 6; count > 0; count--)
    {
        printf("\nEnter %d unsigned integer values:", count);
        scanf("%d", &integer_val[count]);
        if (integer_val[count] == 99)
        { 
            return 0;
        }
        if (integer_val[count] % 2 == 0)
        {      
            printf("You entered: %d\n", integer_val[count]);
        }
        else
        {
            puts("You entered a non-even number!\n");
            count ++;
        }
    }
    printf("\nHere are the values you entered:\n");
    printf("%d\t%d\t%d\t%d\t%d\t%d\n", integer_val[6], integer_val[5], integer_val[4], integer_val[3], integer_val[2], integer_val[1]);
    
    return 0;
}