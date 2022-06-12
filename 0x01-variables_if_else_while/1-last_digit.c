#include <stdlib>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a different value of n each time the code is run
 * the last digit of n is computed
 *
 * prints if the last digit is 5, or 0 or less than 6 and not 0
 * Return: 0  if there is no error
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
