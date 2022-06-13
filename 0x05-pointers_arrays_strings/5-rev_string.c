#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	char mk;
	int i, leth = 0, leth1 = 0;

	while (s[leth] != '\0')
	{
		leth++;
	}

	leth1 = leth - 1;

	for (i = 0; i < leth / 2; i++)
	{
		mk = s[i];
		s[i] = s[leth1];
		s[leth1--] = mk;
	}
}
