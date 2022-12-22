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
	int a = 0, src_b = 0;

	while (src[a++])
		src_b++;

	if (src_b > n)
	{
		for (a = 0; a < n; a++)
			dest[a] = src[a];
	}
	else
	{
		for (a = 0; a < src_b; a++)
			dest[a] = src[a];
	}

	return (dest);
}
