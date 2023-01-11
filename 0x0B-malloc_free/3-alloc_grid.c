#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * wih all elements initialized to 0.
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: NULL If width or height is 0 or negative
 * otherwise - pointer to 2D array
*/

int **alloc_grid(int width, int height)
{
	int **twoD;
	int W_i, H_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (H_i = 0; H_i < height; H_i++)
	{
		twoD[H_i] = malloc(sizeof(int) * width);

		if (twoD[H_i] == NULL)
		{
			for (; H_i >= 0; H_i--)
				free(twoD[H_i]);

			free(twoD);
			return (NULL);
		}
	}
	for (H_i = 0; H_i < height; H_i++)
	{
		for (W_i = 0; W_i < width; W_i++)
			twoD[H_i][W_i] = 0;
	}

	return (twoD);
}
