#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command line arguements
 * @argv: array of pointers to the command line arguements
 *
 * Return: 0 Always successful
 */

int main(int argc, char **argv)
{
	int r, s, sumvalue = 0;

	for (r = 1; r < argc; r++)
	{
		for (s = 0; argv[r][s] != '\0'; s++)
		{
			if (!isdigit(argv[r][s]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sumvalue += atoi(argv[r]);
	}
	printf("%d\n", sumvalue);
	return (0);
}
