#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: string to be appended on
 * @src: string to append to dest
 * @n: number of bytes
 *
 * Return: pointer to resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_a = 0, src_a = 0;
	int dest_b = 0, src_b = 0;

	while (dest[dest_a++])
		dest_b++;

	while (src[src_a++])
		src_b++;

	if (src_b > n)
	{
		for (src_a = 0; src_a < n; src_a++)
			dest[dest_b++] = src[src_a];
	}
	else
	{
		for (src_a = 0; src_a < src_b; src_a++)
			dest[dest_b++] = src[src_a];
	}

	return (dest);
}
