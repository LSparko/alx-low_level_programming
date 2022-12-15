#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if c is uppercase, return 0 otherwise
*/

int _isupper(int c)
{
			if (c >= 'A' && c <= 'Z')
				return (1);
			else
				return (0);
}
