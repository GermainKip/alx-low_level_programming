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
	int n, ko;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ko = n % 10;
	if (ko > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ko);
	else if (ko == 0)
		printf("Last digit of %d is %d and is 0\n", n, ko);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ko);
	return (0);
}
