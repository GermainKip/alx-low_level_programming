#include "main.h"

/**
 * _isdigit - checks for a digit
 * c is a value to be checked in ASCII code
 * 
 * @c: ASCII code representation of the character
 * Return: 1 if c is digit for other 0 otherwise
 */
int _isdigit(int c)
{
		if (c <= 57 && c >= 48)
			return (1);
		else
			return (0);
		_putchar('\n');
}
