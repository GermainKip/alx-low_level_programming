#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * 
 * Return: The number of bytes in s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int non = 0;
	int value;

	while (*s)
	{
		for (value = 0; accept[value]; value++)
		{
			if (*s == accept[value])
			{
				non++;
				break;
			}

			else if (accept[value + 1] == '\0')
				return (non);
		}

		s++;
	}

	return (non);
}
