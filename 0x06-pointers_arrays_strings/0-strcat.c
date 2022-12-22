#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to be concatenated
 * @src: sting to be appended to resulting string
 * Return: pointer to resulting string dest
*/

char *_strcat(char *dest, char *src);
{
	int dest_a = 0, src_a = 0;
	int dest_b = 0, src_b = 0;

	while (dest[dest_a++])
		dest_b++;

	while (src[src_a++])
		src_b++;

	for (src_a = 0; src_a < src_b; src_a++)
		dest[dest_b++] = src[src_a];

	return (dest);
}
