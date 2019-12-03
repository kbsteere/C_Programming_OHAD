/* structure template for ssn */

#include <stdio.h>
#include <string.h>

/* declare structures  */
struct ssn {
	int first_three;
	char dash1;
	int second_two;
	char dash2;
	int last_four;
} ssn = { 123, '-', 45, '-', 6789 };


struct date {
	char month[2];
	char dot1[1];
	char day[2];
	char dot2[1];
	char year[4];
} CURRENT_DATE;

struct time {
	int hours;
	int minutes;
	int seconds;
} TIME_OF_BIRTH = { 8, 45, 0 };

int main (void)
{
	printf("Social Security Number: %d%c%d%c%d\n", ssn.first_three, ssn.dash1,
											ssn.second_two, ssn.dash2, ssn.last_four);

	memcpy(CURRENT_DATE.month, "12", sizeof(CURRENT_DATE.month));
	memcpy(CURRENT_DATE.dot1, ".", sizeof(CURRENT_DATE.dot1));
	memcpy(CURRENT_DATE.day, "02", sizeof(CURRENT_DATE.day));
	memcpy(CURRENT_DATE.dot2, ".", sizeof(CURRENT_DATE.dot2));
	memcpy(CURRENT_DATE.year, "2019", sizeof(CURRENT_DATE.year));

	printf("Date: ");
	printf(CURRENT_DATE.month, CURRENT_DATE.dot1, CURRENT_DATE.day, CURRENT_DATE.dot2, CURRENT_DATE.year);
	printf(" Time: %d:%d:%d\n", TIME_OF_BIRTH.hours, TIME_OF_BIRTH.minutes, TIME_OF_BIRTH.seconds);

	return 0;
}
