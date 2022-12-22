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
	int indx = 0, src_len = 0;

	while (src[src_len] != '\0')
		src_len++;

	if (src_len > n)
	{
		for (indx = 0; indx < n; indx++)
			dest[indx] = src[indx];
	}

	else
	{
		for (indx = 0; indx < src_len; indx++)
			dest[indx] = src[indx];

		dest[indx] = '\0';
	}

	return (dest);
}
