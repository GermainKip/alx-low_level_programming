#include <stdio.h>

/**
 * main - prints all arguements it receives, including the first one
 * print one arguement per line
 * @argc: number of command line arguements
 * @argv: array of pointers to the command line arguements
 *
 * Return: 0 Without any errors
 */

int main(int argc, char **argv)
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
