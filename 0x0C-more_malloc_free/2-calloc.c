#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: bytes of each element
 * the memory is set to 0
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 * Otherwise - a pointer to the allocated memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int in;
	char *cr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cr = malloc(nmemb * size);

	if (cr == NULL)
		return (NULL);

	for (in = 0; in < (size * nmemb); in++)
		cr[in] = 0;

	return (cr);
}
