#include "main.h"

/**
 * puts2 - Prints one char out of two of a string
 * @str: The string containing characters.
 *
 */

void puts2(char *str)
{
	int c = 0, length = 0;

	while (str[c++])
	{
		length++;
	}
	for (c = 0; c < length; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
