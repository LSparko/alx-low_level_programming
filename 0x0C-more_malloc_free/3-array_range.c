#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer ordered from min to max
 * @min: first value of array
 * @max: last value of array
 *
 * Return: NULL if min > max or fails,
 * otherwise,pointer to newly created array
*/

int *array_range(int min, int max)
{
	int *a, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size)

		if (a == NULL)
			return (NULL);

	for (index = 0; index < size; index++)
		a[index] = min++;

	return (a);
}
