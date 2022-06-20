#include "main.h"

/**
 * _memset- fills memory with a constant byte
 *
 * @s: pointer to the memory location
 * @b: the constant byte
 * @n: input integer
 *
 * Return: pointer to the memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;
	char *poi = s, value = b;

	for (ind = 0; ind < n; ind++)
	{
		poi[ind] = value;
	}

	return (poi);
}
