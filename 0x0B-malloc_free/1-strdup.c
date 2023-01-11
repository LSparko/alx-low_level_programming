#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: NULL if str = NULL
 * returns a pointer to the duplicated string or
 * NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	copy = malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];

	copy[len] = '\0';

	return (copy);
}
