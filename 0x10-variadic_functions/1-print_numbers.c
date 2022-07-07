#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be prited between the numbers
 * @n: number of integers passed to the function
 * prints new line at end of the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int in;
	va_list vali;

	va_start(vali, in);

	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(vali, int));
		if (separator && in < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(vali);
}
