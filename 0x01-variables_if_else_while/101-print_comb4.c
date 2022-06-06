#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *Return: Always 0 if it is successful
 */
int main(void)
{
	int p, q, l;

	for (p = 48; p < 58; p++)
	{
		for (q = 49; q < 58; q++)
		{											       for (l = 50; l < 58; l++)
 			{
				if (l > q && q > p)
				{
					putchar(p);
					putchar(q);
					putchar(l);
					if (p != 55 || q != 56)
		                        {
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
