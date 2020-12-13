#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0));
}

int countDaysSoFar(int daysOfMonth[12], int month, int day)
{
	int result = 0;
	for (int i = 0; i < month; i++)
	{
		result += daysOfMonth[i];
	}
	result += day;
	return result;

}

int main()
{
	int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	int year;
	int month;
	int day;

	printf_s("Please enter year:\n");
	scanf_s("%d", &year);
	printf_s("Please enter month:\n");
	scanf_s("%d", &month);
	month -= 1;
	printf_s("Please enter day:\n");
	scanf_s("%d", &day);

	if (isLeapYear)
	{
		daysOfMonth[1] = 29;
	}

	printf_s("%d", countDaysSoFar(daysOfMonth, month, day));

	return 0;
}