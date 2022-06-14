#include "main.h"

/**
 * _strcpy - copies the string pointed to by @src
 * including terminating null byte, to a buffer pointed to by @dest.
 *
 * @src: A source string to copy.
 * @dest: A buffer to copy the string to.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int l, t;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (t = 0; t < l; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';

	return (dest);
}
