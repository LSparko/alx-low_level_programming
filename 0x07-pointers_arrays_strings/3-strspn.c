#include "main.h"

/**
 * _strspn - get the length of the prefix of a substring
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
