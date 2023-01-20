#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters passed to function
 * @...: variable number of parameters whose sum are to be calculated
 *
 * Return: 0 if n == 0,
 * otherwise, return te sum of all the parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list numbs;

	va_start(numbs, n);

	for (i = 0; i < n; i++)
		sum += va_arg(numbs, int);

	va_end(numbs);

	return (sum);
}
