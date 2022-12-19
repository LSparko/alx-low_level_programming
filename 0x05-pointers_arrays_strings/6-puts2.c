#include "main.h"

/**
 * puts2 - print everyother character of a string starting
 * with first character
 * @str: string to br printed
*/

void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[len] != '\0')
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
