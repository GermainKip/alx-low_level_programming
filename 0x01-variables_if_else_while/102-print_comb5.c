#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all the possible combinations of two two-digit numbers
 *
 *Return: 0 if the program is successful
 */
int main(void)
{
	int numb1, numb2;

	for (numb1 =0; numb1 <= 98; numb1++)
	{
		for (numb2 = numb2 + 2; numb2 <= 99; numb2++)
		{
			putchar((numb1 / 10) + '0');
			putchar((numb1 % 10) + '0');
			putchar(' ');
			putchar((numb2 / 10) + '0');
			putchar((numb2 % 10) + '0');

			if (numb1 == 98 && numb2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

