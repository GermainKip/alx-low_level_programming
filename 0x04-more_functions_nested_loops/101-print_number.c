#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: input integer parameter
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int k = l;

	if (l < 0)
	{
		_putchar(45);
		k = -i;
	}
	if (k / 10)
	{

		print_number(k / 10);
	}
	_putchar(k % 10 + '0');
}
