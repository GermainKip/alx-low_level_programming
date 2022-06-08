#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet write respect to lowercase
 *
 */
void print_alphabet_x10(void)
{
	char b = 48, alp;

	for (b = 48; b <= 57; b++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
