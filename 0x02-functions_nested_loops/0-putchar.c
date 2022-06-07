#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 should always be returned
 */
int main(void)
{
	char m[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(m[n]);
	}
	_putchar('\n');
	return (0);
}
