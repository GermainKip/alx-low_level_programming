#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string given to it as a parameter
 * @str: the string duplicated
 *
 * Return: pointer to the duplicated string or NULL on failure
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int m, n;

	if (str == NULL)
		return (NULL);

	for (m = 0; str[m] != '\0'; m++)
		;

	strout = (char *)malloc(sizeof(char) * (m + 1));

	if (strout == NULL)
		return (NULL);

	for (n = 0; n <= m; n++)
		strout[n] = str[n];

	return (strout);
}
