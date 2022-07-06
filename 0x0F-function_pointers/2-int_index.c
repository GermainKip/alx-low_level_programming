#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: index of first element for which cmp does not return 0
 * -1 if no search is found 1 if size is less than or equal to zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int inx;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (inx = 0; inx < size; inx++)
	{
		if (cmp(array[inx]) != 0)
			return (inx);
	}

	return (-1);
}
