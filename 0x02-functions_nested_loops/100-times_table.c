#include "main.h"

/**
 * print_times_table prints out hte multiple a number of times
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int m, p, ad;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar(48);
			for (p = 1; p <= n; p++)
			{
				ad = m * p;
				_putchar(44);
				_putchar(32);
				if (ad <= 9)
				{
					_putchar(32);
					_putchar(ad + 48);
				}
				else if (ad <= 99)
				{
					_putchar(32);
					_putchar((ad / 10) + 48);
					_putchar((ad % 10) + 48);
				}
				else
				{
					_putchar(((ad / 100) % 10) + 48);
					_putchar(((ad / 10) % 10) + 48);
					_putchar((ad % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}

