#include <stdio.h>
/**
 * main - print all possible different combinations of two-digit numbers
 * Return: Always 0
*/
int main(void)
{
	int a = 48;
	int b = 49;

	while (a < 57)
	{
		while (b < 58)
		{
			putchar(a);
			putchar(b);
			if (a < 56 && b < 57)
			{
				putchar(44);
				putchar(32);
			}
			a++;
			b++;
		}
	}
	putchar('\n');
	return (0);
}

