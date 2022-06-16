#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int z;

	for (i = 0; i < n--; i++)
	{
		z = a[i];
		a[i] = a[n];
		a[n] = z;
	}
}
