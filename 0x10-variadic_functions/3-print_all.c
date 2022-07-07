#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0, k;
	char *str;
	const char c[] = "cifs";
	va_list vali;

	va_start(vali, format);
	while (format && format[i])
	{
		k = 0;
		while (c[k])
		{
			if (c[k] == format[i] && j)
			{
				printf(", ");
				break;
			} k++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vali, int)), j = 1;
				break;
			case 'i':
				printf("%d", va_arg(vali, int)), j = 1;
				break;
			case 'f':
				printf("%f", va_arg(vali, double)), j = 1;
			case 's':
				str = va_arg(vali, char *);
				if (!str)
				{
					print("(nil)");
					break;
				}
					printf("%s", str), j = 1;
					break;
		} in++;
	}
	printf("\n"), va_end(vali);
}
