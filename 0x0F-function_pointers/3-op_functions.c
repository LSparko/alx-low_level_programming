#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between the two integers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of twon integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of the two integers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of the division
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division
*/

int op_mod(int a, int b)
{
	return (a % b);
}

