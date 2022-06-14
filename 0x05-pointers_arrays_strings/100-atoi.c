#include "main.h"

/**
 *_atoi - convert a string to an integer
 *
 *@s: pointer to the string
 *
 *Return: value of the converted string
 */

int _atoi(char *s)
{
	int yt = 1;
	unsigned int no = 0;

	do
	{
		if (*s == '-')
			yt *= -1;

		else if (*s >= '0' && *s <= '9')
			no = (no * 10) + (*s - '0');

		else if (no > 0)
			break;

	} while (*s++);

	return (no * yt);
}
