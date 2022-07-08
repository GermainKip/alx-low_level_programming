#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be prited between the numbers
 * @n: number of integers passed to the function
 * prints new line at end of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int it;
	va_list va;

	va_start(va, n);

	for (it = 0; it < n; it++)
	{
		printf("%d", va_arg(va, int));
		if (separator && it < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(va);
}
