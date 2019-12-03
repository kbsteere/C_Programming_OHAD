// Nested for Statements
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_ttable(int outer, int inner);
void unit_test_create_file();
void test_print_ttable();
void open_file(char result[]);

int main(void)
{
   // attempt to create unit test log
   unit_test_create_file();

   // int inner = 12;
   // int outer = 12;

    //printf("The times table:\n");
    //print_ttable(outer, inner);
   test_print_ttable(); 
   return 0;
}

int print_ttable(int outer, int inner)
{
   /* int a, b;
    for (a = 1; a <= outer; a++)
    {
        for (b = 1; b <= inner; b++)
        {
            printf("%d\t", a*b);
        }
        printf("\n");
    }*/
    return (inner+outer);
}

void unit_test_create_file(void)
{
   FILE *fptr;
   fptr = fopen("unitTestResults.log","w+");

  if(fptr == NULL)
  {
    printf("Error!, unit test file creation failed");
    exit(1);
  }

  fclose(fptr);
  return;
}

void test_print_ttable()
{
  int inner = rand();
  int outer = rand();
  char result[7];
  int test = print_ttable(inner, outer);

  if (test == (inner+outer))
  {
   strcpy(result,"PASSED\n");
  }
  else
  {
   strcpy(result,"FAILED\n");
  }

  open_file(result);
  return;
}

void open_file(char result[])
{
  FILE *fptr;
  fptr = fopen("unitTestResults.log", "w+");

  fprintf(fptr,"%s", result);
  fclose(fptr);

  return;
}
