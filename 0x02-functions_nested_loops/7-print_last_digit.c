#include "main.h"

/**
 * print_last_digit - prints the last digit of
 * e number
 *
 * @b: is the number whose last will be printed
 * Return: the value of the last digit
 */

int print_last_digit(int b)
{
	int e;

	e = b % (10);
	if (e < 0)
	{
		_putchar(-e + 48);
		return (-e);
	}
	else
	{
		_putchar(e + 48);
		return (e);
	}
	_putchar('\n');
}
