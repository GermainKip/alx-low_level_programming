#include <stdio.h>

/**
 * main - Prints the whole alphabet of lowercase and that of uppercase.
 *Return: Always 0
 */
int main(void)
{
       char letter;

       for (letter = 'a'; letter <= 'z'; letter++)
	   putchar(letter);

       for (letter = 'A'; letter <= 'Z'; letter++)
	   putchar(letter);

       putchar('\n');

       return (0);
}
