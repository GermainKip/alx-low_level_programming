#include "main.h"

/**
 * print_line - draws a straight line
 *
 * You can only use _putchar function to print
 * @n: is the number of times the character _ should be printed
 *
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
