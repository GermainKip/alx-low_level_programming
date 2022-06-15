#include "main.h"

/**
 * _strncpy - Copies at most an inputted number 
 *
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int indx = 0, src_length = 0;

	while (src[indx++])
		src_length++;

	for (indx = 0; src[indx] && indx < n; indx++)
		dest[indx] = src[indx];

	for (indx = src_length; indx < n; indx++)
		dest[indx] = '\0';

	return (dest);
}
