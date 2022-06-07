#include "main"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times followed by a newline
 *
 */
void print_alphabet_x10(void)
{
	char a = 48, alp;

	for (a = 48; a <= 57; a++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}	
		_putchar('\n');
	}
}
