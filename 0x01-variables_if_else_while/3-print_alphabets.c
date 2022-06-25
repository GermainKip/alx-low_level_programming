#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the whole alphabet of lowercase and that of uppercase.
 * Return: Always 0
 */

int main(void)
{
	char LETT, lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(lett);

	for (LETT = 'A'; LETT <= 'Z'; LETT++)
		putchar(LETT);

	putchar('\n');
	return (0);
}
