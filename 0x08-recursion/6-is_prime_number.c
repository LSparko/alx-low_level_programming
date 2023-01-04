#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - checks if number is divisible
 * @num: number to be checked
 * @div: divisor
 *
 * Return: 0 if number is divisble
 * and 1 if not
*/

int is_divisible(int num, int div)
{
	if ((num % 10) == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: 0 if not prime and 1 if prime
*/

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}

