#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}

	return ('\0');
}
