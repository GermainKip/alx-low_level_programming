#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: the string
 *
 * Return: a
 */

char *leet(char *a)
{
	int m;
	int n;
	char set1[] = "aAeEoOtTlL";
	char set2[] = "4433007711";

	for (m = 0; a[m] != '\0'; m++)
	{
		for (n = 0; n < 10; n++)
		{
			if (a[m] == set1[n])
			{
				a[m] = set2[n];
			}
		}
	}
	return (a);
}
