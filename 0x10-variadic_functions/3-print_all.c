#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @arg: list of arguments pointing to the chars to be printed
*/

void print_char(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);
	printf("%c", alpha);
}

/**
 * print_int - prints an integer
 * @arg: list of arguments pointing to the ints to be printed
*/

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float
 * @arg: list of arguments pointing to the floats to be printed
*/

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string
 * @arg : list of arguments pointing to the string to be printed
 *
 * Description: if the string is NULL, print (nil) instead
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything,followed by a new line
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to be printed
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, b = 0;
	char *separator = "";
	printer_X funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		b = 0;

		while (b < 4 && (*(format + i) != *(funcs[b].symbol)))
			b++;

		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(args);
			separator = ", ";
		}

		i++;

	}

	printf("\n");

	va_end(args);
}
