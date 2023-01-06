#include "main.h"

/**
 * _strlen - return thr length of a string
 * @s: string whose length is to be found
 *
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
