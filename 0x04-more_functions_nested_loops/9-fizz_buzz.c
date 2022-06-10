#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * It is followed by a new line
 *
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * print FizzBuzz for multiples of 5 and 3
 *
 * Return: 0 For succesful run
 */

int main(void)
{
	int m;

	m = 1;
	printf("%d", m);
	for (m = 2; m <= 100; m++)
	{
		if (m % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (m % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((m % 3 == 0) && (m % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", m);
		}
	}
	printf("\n");
	return (0);
}
