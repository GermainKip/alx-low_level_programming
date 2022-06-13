#include "main.h"

/**
 * print_rev - prints a string in reverse
 *followed by a new line
 * @s: poiter to the string
 *
 */

void print_rev(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
	{
	}
	for (m = m - 1; m >= 0; m--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
