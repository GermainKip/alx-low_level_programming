#include  "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 *
 * Should print the second half of the string
 * @str: pointer to the string
 *
 */

void puts_half(char *str)
{
	int l = 0;
	int w;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	if (l % 2 == 0)
	{
		w = l / 2;
	}
	else
	{
		w = (l + 1) / 2;
	}
	for ( ; w < l ; w++)
	{
		_putchar(str[w]);
	}
	_putchar('\n');
}
