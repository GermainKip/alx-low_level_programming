#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Return: Always 0 if it is successful
 */

int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
	   putchar(chr);
	}
	putchar('\n');
	return (0);
}
