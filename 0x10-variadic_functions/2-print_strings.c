#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passes to the function
 * @...: variable number of strings to be printed
 *
 * Description: If separator is NULL, it is not printed.
 * if one of the strings is NULL, (nil) is printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *s;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}

