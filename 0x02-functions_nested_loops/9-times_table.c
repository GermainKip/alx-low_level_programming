#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 *
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int tone, lone, e;

	for (tone = 0; tone <= 9; tone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (lone = 1; lone <= 9; lone++)
		{
			e = (tone * lone);
			if ((e / 10) > 0)
			{
				_putchar((e / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((e % 10) + '0');

			if (lone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
