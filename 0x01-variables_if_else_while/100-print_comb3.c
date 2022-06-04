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
		a = '0';
		while (a <= '9')
		{
			if (a != a && b < a )
			{
				putchar(b);
				putchar(a);
				if (b == '8' && a == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}			
	putchar('\n');
	return (0);
}
