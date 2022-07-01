#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: lower limit of the array
 * @max: upper limit of the array
 * array should contain values from min to max
 *
 * Return: pointer to the newly created array
 * if min > max return NULL
 * if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	unsigned int in;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (in = 0; min <= max; in++, min++)
		arr[in] = min;

	return (arr);
}
