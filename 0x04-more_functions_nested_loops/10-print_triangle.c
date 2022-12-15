#include "main.h"

/**
 * print_triangle - print triangle using the # character
 * @size: size of triangle
*/

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 0; b++)
				_putchar(' ');

			for (b = 0; b < a; b++)
				_putchar('#');

			if (a == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
