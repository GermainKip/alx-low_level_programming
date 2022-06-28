#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ko;
	unsigned int sz;

	if (size == 0)
		return (NULL)

	ko = malloc(sizeof(c) * size);

	if (ko == NULL)
		return (NULL);

	for (sz = 0; sz < size; sz++)
		sz[sz] = c;

	return (ko);
}
