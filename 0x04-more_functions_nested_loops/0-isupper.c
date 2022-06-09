#include "main.h"

/**
 * _isupper - checks for uppercase character
 * c is a character to be checked in ASCII code
 * 
 * @c: ASCII code representation of the character
 * Return: 1 if c is uppercase for other 0 otherwise
 */
int _issupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
	_putchar('\n');
}
