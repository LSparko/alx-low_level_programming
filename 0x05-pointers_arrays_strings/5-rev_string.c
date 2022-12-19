#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
*/

void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[len] != '\0')
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
