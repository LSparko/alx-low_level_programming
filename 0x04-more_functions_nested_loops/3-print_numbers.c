#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 followed by new line
*/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar((i % 10) + '0');
		i++;
	}

	_putchar('\n');
}
