#include "main.h"

/**
 * _pow_recursion - return the value of x raised to power of y
 * @x: number whose value is to be returned
 * @y: power of x
 *
 * Return: value of x raised to power y
*/

int _pow_recursion(int x, int y)
{
	int res = x;

		if (y < 0)
			return (-1);

		else if (y == 0)
			return (1);

		res *= _pow_recursion(x, y - 1);

		return (res);
}
