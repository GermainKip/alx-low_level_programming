#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * You can only use _putchar
 * @n: number of times the character \ is printed
 * it will end with a new line
 */

void print_diagonal(int n)
{
	int m, o;

	for (m = 0; m < n; m++)
	{
		for (o = 0; o < m; o++)
		{
			_putchar(32);
		}
		_putchar(92);
		if (m < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
