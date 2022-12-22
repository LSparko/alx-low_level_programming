#include "main.h"

/**
 * cap_string - capitalise all words of a string
 * @str: string to be capitalised
 *
 * Return: pointer to changed string
*/

char *cap_string(char *str)
{
	int indx = 0;

	while (str[indx])
	{
		while (!(str[indx] >= 'a' && str[indx] <= 'z'))
			indx++;

		if (str[indx - 1] == ' ' ||
		str[indx - 1] == '\t' ||
		str[indx - 1] == '\n' ||
		str[indx - 1] == ',' ||
		str[indx - 1] == ';' ||
		str[indx - 1] == '.' ||
		str[indx - 1] == '!' ||
		str[indx - 1] == '?' ||
		str[indx - 1] == '"' ||
		str[indx - 1] == '(' ||
		str[indx - 1] == ')' ||
		str[indx - 1] == '{' ||
		str[indx - 1] == '}')
			str[indx] -= 32;

		indx++;
	}
		return (str);
}
