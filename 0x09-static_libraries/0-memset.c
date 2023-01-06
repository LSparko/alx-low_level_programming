#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: pointer to memory area to be filled
 * @b: constant byte to fill memory area
 * @n: number of bytes
 *
 * Return: pointer to memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *mem = s, value = b;

	for (index = 0; index < n; index++)
		mem[index] = value;

	return (mem);
}
