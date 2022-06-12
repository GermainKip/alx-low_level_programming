#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of 2 digits from 0 to 89
 *the two digits must be different
 *print from highest to lowest
 *putchar is only allowed
 *Return: 0 for no mistakes made
 */

int main(void)
{
        int a, b;

        a = '0';
        b = '0';

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}			
	putchar('\n');
	return (0);
}
