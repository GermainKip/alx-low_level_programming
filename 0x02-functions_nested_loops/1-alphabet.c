#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase then followed by a newline
 *
 *Return: 0 if the code runs smoothly
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
