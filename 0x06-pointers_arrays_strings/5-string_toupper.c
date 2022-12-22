#include "main.h"

/**
 * string_toupper - change all lowercase letters of string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to changed string
*/

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
