#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string to be concatenated
 * if n is greater than length of s2 then use entire string s2
 * if NULL is passed treat it as an empty string
 *
 * Return: pointer to the new memoer location with the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *brcat;
	unsigned int length = n, ind;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ind = 0; s1[ind]; ind++)
		length++;

	brcat = malloc(sizeof(char) * (length + 1));

	if (brcat == NULL)
		return (NULL);

	length = 0;

	for (ind = 0; s1[ind]; ind++)
		brcat[length++] = s1[ind];

	for (ind = 0; s2[ind] && ind < n; ind++)
		brcat[length++] = s2[ind];

	brcat[length] = '\0';

	return (brcat);
}
