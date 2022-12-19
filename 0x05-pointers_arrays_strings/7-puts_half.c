#include "main.h"

/**
 * puts_half - print half of a string followed by new line
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string
 * @str: string to be printed
*/

void puts_half(char *str)
{
	int len = 0, index = 0, n;

	while (str[len] != '\0')
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
