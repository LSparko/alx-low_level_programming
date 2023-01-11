#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL of it fails.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, concat_i = 0, len  = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(len * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[concat_i++] = s2[i];

	return (concat);
}
