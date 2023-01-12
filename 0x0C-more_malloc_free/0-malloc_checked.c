#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: number of bytes to be allocated
 *
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
