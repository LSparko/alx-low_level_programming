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
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
