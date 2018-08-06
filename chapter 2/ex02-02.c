/* ex02-02.c */
#include <stdio.h>

void display_line(void);

int main(void)
{
  display_line();
  printf("\n Teach Yourself C in One hour a Day \n");
  display_line();
  printf("\n");
  return 0;
}

/* print asterisk line */
void display_line(void)
{
 for(int counter =0; counter < 30; counter++)
 {
  printf("*");
 } 
}
/* end of program */

