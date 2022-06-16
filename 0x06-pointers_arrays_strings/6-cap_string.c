#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 *
 */

char *cap_string(char *s)
{
	int p;
	int q;

	char abc[13] = {' ', '\t', '\n', ',', ';', '.','!', '?', '"', '(', ')', '{', '}'};

	for (p = 0; s[p] != '\0'; p++)
	{
		if (p == 0 && s[p] >= 'a' && s[p] <= 'z')
		{
			s[p] -= 32;
		}

		for (q = 0; q < 13; q++)
		{
			if (s[p] == abc[q])
			{
				if (s[p + 1] >= 'a' && s[p + 1] <= 'z')
				{
					s[p + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
