#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: the converted number or 0 if there is one or more characters
 * in the string b that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unid = 0;
	int in, base;

	if (b == NULL)
		return (0);

	for (in = 0; b[in] != '\0'; ++in)
		;

	for (--in, base = 1; in >= 0; --in, base *= 2)
	{
		if (b[in] != '0' && b[in] != '1')
			return (0);

		if (b[in] & 1)
			unid += base;
	}
	return (unid);
}
