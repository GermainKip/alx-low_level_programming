#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes locates the first occurrence
 * in the string s of any of the bytes in the string accept
 * @s: pointer to s
 * @accept: pointer to accept
 *
 * Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
				return (&s[m]);
		}
	}

	return (0);
}
