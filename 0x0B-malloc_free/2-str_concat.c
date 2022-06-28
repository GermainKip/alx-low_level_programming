#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, NULL if empty string,
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int dex, concat_index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (dex = 0; s1[dex] || s2[dex]; dex++)
		length++;

	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
		return (NULL);

	for (dex = 0; s1[dex]; dex++)
		concat_str[concat_index++] = s1[dex];

	for (dex = 0; s2[dex]; dex++)
		concat_str[concat_index++] = s2[dex];

	return (concat_str);
}
