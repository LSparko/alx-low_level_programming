#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: number to be computed
 *
 * Return: value of number
*/

int print_last_digit(int n)
{
	lastdigit = n % 10;
	if (lastdigit < 0)
		lastdigit *= -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
