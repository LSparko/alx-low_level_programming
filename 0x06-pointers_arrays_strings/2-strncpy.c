#include "main.h"

/**
 * _strncpy - copy a string of n bytes
 * @dest: destination string to be copied into
 * @src: source string to be copied
 * @n: number of bytes of string to be copied
 *
 * Return: pointer to resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
		return (NULL);

	char *len = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (len);
