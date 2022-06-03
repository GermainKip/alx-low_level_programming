#include <stdio.h>
/**
 * main - print letters of alphabet in lowercase
 *print all the letters except q and e
 *only use putchar to print the string
 *Return: 0 if no error is encountered
 */
int main(void)
{
		char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			if (!(alphabet == 'e' || alphabet == 'q'))
				putchar(alphabet);

		putchar('\n');
		return (0);
}
