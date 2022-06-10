#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *
 * You can only use _putchar function to print
 * @size -  is the size of the triangle
 * Use # to print the triangle
 */

void print_triangle(int size)
{
	int ab, bc, de;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (bc = 0; bc <= (size - 1); bc++)
		{
			for (ab = 0; ab < (size - 1) - bc; ab++)
			{
				_putchar(' ');
			}
			for (de = 0; de <= bc; de++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
