#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers to be reversed
 * @n: nber of elements in array
*/

void reverse_array(int *a, int n)
{
	int temp, indx;

	indx = n - 1;
	while (indx >= n / 2)
	{
		temp = a[n - 1 - indx];
		a[n - 1 - indx] = a[indx];
		a[indx] = temp;
		indx--;
	}
}
