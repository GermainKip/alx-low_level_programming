#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @a: input string.
 *
 * Return: a
 *
 */

char *rot13(char *a)
{
	int value = 0, k;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(a + value) != '\0')
	{
		for (k = 0; k < 52; k++)
		{
			if (*(a + value) == alphabet[k])
			{
				*(a + value) = rot13[k];
				break;
			}
		}
		value++;
	}

	return (a);
}

