#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 without type char
 * Return: 0
*/
int main(void)
{
		int a;

			for (a = 0; a < 10; a++)
				putchar((a % 10) + '0');
			putchar('\n');
			return (0);
}
