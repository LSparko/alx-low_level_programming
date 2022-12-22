#include "main.h"

/**
 * string_toupper - change all lowercase letters of string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to changed string
*/

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;

		str++;
	}

	return (str)
}
