#include <stdio.h>

/**
 * main - prints the values of the fibonacci series
 *
 *Return: 0 if it is successful
 *
 */

int main(void)
{
	int f;

	long int numb1, numb2, nxt;

	numb1 = 1;
	numb2 = 2;
	printf("%ld, %ld", numb1, numb2);
	for (f = 0; f < 48; f++)
	{
		nxt = numb1 + numb2;
		printf(", %ld", nxt);
		numb1 = numb2;
		numb2 = nxt;
	}
	printf("\n");
	return (0);
}
