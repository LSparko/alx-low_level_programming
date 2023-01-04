#include "main.h"

/**
 * factorial - return factorial of given number
 * @n: given number
 *
 * Return: factorial of n
*/

int factorial(int n)
{
	int res = n;

		if (n < 0)
			return (-1);

		else if (n >= 0 && <= 1)
			return (1);

		res *= factorial(n - 1);

		return (res);
}
