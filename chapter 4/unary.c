// Demonstrates unary operator prefix and postfix modes
#include <stdio.h>

int a, b; 

int main(int argc, char const *argv[])
{
    a = b = 0; // Sets a and b to 0 to start

    // Start with th incremental operator
    // Print them, decrementing each time
    // Use prefix mode for b, postfix mode for a

    printf("Count up!\n");
    printf("Post    Pre\n");
    printf("a        b\n"); // added to make it clearer which value was associated with which variable
    printf("%d        %d\n", a++, ++b);
    printf("%d        %d\n", a++, ++b);
    printf("%d        %d\n", a++, ++b);
    printf("%d        %d\n", a++, ++b);
    printf("%d        %d\n", a++, ++b);

    printf("\nCurrent values of a and b:\n");
    printf("%d      %d\n\n", a, b);
    
    printf("Count down!\n");
    printf("Post    Pre\n");
    printf("a        b"); // added to make it clearer which value was associated with which variable
    printf("\n%d        %d", a--, --b);
    printf("\n%d        %d", a--, --b);
    printf("\n%d        %d", a--, --b);
    printf("\n%d        %d", a--, --b);
    printf("\n%d        %d", a--, --b);

    return 0;
}
