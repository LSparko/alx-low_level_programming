#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 *
 * Return: integer of converted string
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign = -1;

		else if (*s == '+' || *s == ' ')
			sign = 1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (*s == ';')
			break;

	} while (*s++);

	return (num * sign);
}
