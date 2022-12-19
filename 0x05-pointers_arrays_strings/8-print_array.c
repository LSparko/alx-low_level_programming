#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (a[index] == n - 1)
			continue;

		printf(", ");
	}

		printf("\n");
}
