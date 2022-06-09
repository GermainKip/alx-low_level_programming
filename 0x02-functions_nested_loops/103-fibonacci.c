#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int no1, no2, fn, afn;

	no1 = 1;
	no2 = 2;
	fn = afn = 0;
	while (fn <= 4000000)
	{
		fn = no1 + no2;
		no1 = no2;
		no2 = fn;
		if ((no1 % 2) == 0)
		{
			afn += no1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
