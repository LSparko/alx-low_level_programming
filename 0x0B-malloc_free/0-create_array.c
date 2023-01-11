#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the array to be initialized
 * @c: specific char array is to be initialized with
 *
 * Return: NULL if siz = 0
 * a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c);
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
