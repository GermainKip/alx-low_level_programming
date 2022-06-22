#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */

void print_chessboard(char (*a)[8])
{
	int in1, in2;

	for (in1 = 0; a[in1][7]; in1++)
	{
		for (in2 = 0; in2 < 8; in2++)
			_putchar(a[in1][in2]);

		_putchar('\n');
	}
}
