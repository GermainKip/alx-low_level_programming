#include <stdio.h>

/**
 * main - it  prints prime factors of 612852475143
 *
 * Return: Always 0 if it is successful
 */

int main(void)
{
	long int p, q;
	p = 612852475143;
	for (q = 2; q <= p; q++)
	{
		if (p % q == 0)
		{
			p /= q;
			q--;
	}
	printf("%ld\n", q);
	return (0);
}
