#include "main.h"

/**
 * void swap_int - function that swaps the values of two integers
 *
 * @a: swaps with b
 * @b: swaps with a
 *
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
