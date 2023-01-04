#include "main.h"

/**
 * _strlen_recursion - return lengh of a string
 * @s: string to be checked
 *
 * Return: length of string *s
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
