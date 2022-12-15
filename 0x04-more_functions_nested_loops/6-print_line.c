#include "main.h"

/**
 * print_line - print _ n times
 * @n: number of times to print _
*/

void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
