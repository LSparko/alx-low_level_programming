#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: number of bytes of memory for each element
 *
 * Return: NULL if nmemb = 0, size = 0, or  fail,otherwise,
 * return pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	a = mem;

	for (i = 0; i < (nmemb * size); i++)
		a[i] = '\0';

	return (mem);
}
