#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * It is followed by a new line
 * You can only use _putchar twice
 */

void print_numbers(void)
{
	int numb;

	for (numb = 48; numb <= 57; numb++)
	{
		_putchar(numb);
	}
	_putchar('\n');
}
