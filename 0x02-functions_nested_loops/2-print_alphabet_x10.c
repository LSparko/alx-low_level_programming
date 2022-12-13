#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case 10x followed
 * by a new line
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
