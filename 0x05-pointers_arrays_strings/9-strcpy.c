#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 * terminating null byte, to a buffer pointed to by @dest.
 * @dest: buffer to copy the string to
 * @src: source string to copy
 *
 * Return: pointer to the destination string @dest
*/

char *_strcpy(char *dest, char *src)
{
	int index = 0, len = 0 

	while (src[index++])
		len++;

	for (index = 0; index < len; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
