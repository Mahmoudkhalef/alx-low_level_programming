#include <stdio.h>
#include "main.h"

/**
* @month: month in number format
* @day: day of month
* @year: year
*/

void print_remaining_days(int month, int day, int year)
{
	/**
	 * leap year when it can be divided
	 * by 100 and 400 or by 4 evenly
	*/
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invailid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Rmaining days: %d\n", 365 - day);
		}
	}
}
