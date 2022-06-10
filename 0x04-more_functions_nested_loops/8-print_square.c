#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of both width and length
 * You can only use _putchar function to print
 * Use the # to print the square
 */
void print_square(int size)
{
	int mm, ss;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (mm = 1; mm <= size; mm++)
		{
			_putchar('#');
			for (ss = 2; ss <= size; ss++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
