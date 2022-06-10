#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers from 0 to 9
 * You ca only use _putchar twice
 *
 * Return 0-9 except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if ((n == 2) || (n == 4))
			continue;
		else
			_putchar(n + '0');
	}
	putchar('\n');
}
