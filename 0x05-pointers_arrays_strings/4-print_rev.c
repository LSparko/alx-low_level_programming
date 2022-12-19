#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be printed
*/

void print_rev(char *s)
{
	int a = 0, index;

	while (s[index++])
		a++;

	for (index = a - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
