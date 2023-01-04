#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - find natural square root of an inputted number
 * @num: number whose square root is to be found
 * @root: root to be tested
 *
 * Return: -1 if not a natural square root
 * and square root if it is a natural square root
*/

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - find the natural square root of a number
 * @n: number whose square root is to be found
 *
 * Return: -1 if not a natural square root,
 * and square root if a natural square root
*/

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
