#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int in;
	va_list vali;
	char *str;

	va_start(vali, n);

	for (in = 0; in < n; in++)
	{
		str = va_arg(vali, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && (in < n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(vali);
}
