#include "main.h"

/**
 *  _memcpy -  copies n bytes from memory area src to memory area dest
 * @dest: destination memory
 * @src: source memory
 * @n: input integer
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int o, k;

	o = 0;
	k = 0;
	while (n > 0)
	{
		dest[k] = src[o];
		o++;
		k++;
		n--;
	}
	
	return (dest);
}
