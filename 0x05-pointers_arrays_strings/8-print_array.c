#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a newline
 * @n - is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * @a: pointer
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
