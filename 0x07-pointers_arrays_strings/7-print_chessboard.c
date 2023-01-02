#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: chessboard to be printed
*/

void print_chessboard(char (*a)[8])
{
	int h1, h2;

	for (h1 = 0; a[h1][7]; h1++)
	{
		for (h2 = 0; h2 < 8; h2++)
			_putchar(a[h1][h2]);

		_putchar('\n');
	}
}
