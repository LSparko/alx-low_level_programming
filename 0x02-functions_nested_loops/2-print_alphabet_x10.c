#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case 10x followed
 * by a new line
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char ch = 'a';

	while (count++ <= 9)
	{
		while (ch <= 'z')
			_putchar(ch);
		ch++;
		_putchar('\n');
	}
}
