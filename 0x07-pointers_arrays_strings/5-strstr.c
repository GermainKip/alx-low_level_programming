#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning of the located substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *k = haystack;
	char *e = needle;

	while (*k)
	{
		e = needle;
		k = haystack;
		while (*e)
		{
			if (*k == *e)
			{
				e++;
				k++;
			}
			else
				break;
		}
		if (*e == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
