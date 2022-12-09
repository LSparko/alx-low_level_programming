#include <stdio.h>
/**
 * main - print all base 16 numbers in lowercase
 * Return: 0
*/
int main(void)
{
			int a;
			char ch;

				for (a = 0; a < 10; a++)
					putchar((a % 10) + '0');
				for (ch = 'a'; ch <= 'f'; ch++)
					putchar(ch);
				putchar('\n');
				return (0);
}
