#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 if s1 > s2
 * -15 if s1 < s2
 *  0 if s1 = s2
*/

int _strcmp(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0;

	while (*s1++)
		s1_len++;

	while (*s2++)
		s2_len++;

	if (s1_len > s2_len)
		return (15);

	else if (s1_len < s2_len)
		return (-15);

	return (0);
}
