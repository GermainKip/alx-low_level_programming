#include "main.h"

/**
 * _puts - function that prints a string
 * followed by a new line
 * @str: pointer to the string
 *
 */

void _puts(char *str)
{
	int b = 0;

	while (*(str + b) != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
