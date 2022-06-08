#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line
 * numbers should be separated by commas followed by space
 * first number should be number passed to you function and
 * last number should be 98
 * @b: number passed into the function
 */

void print_to_98(int b)
{
	if (b > 98)
	{
		for (; b > 98; b--)
		{
			printf("%d, ", b);
		}
	}
	else if (b < 98)
	{
		for (; b < 98; b++)
		{
			printf("%d, ", b);
		}
	}
	printf("%d\n", b);
}
