#include <stdio.h>
/**
 * main - print all possible different combinations of two-digit numbers
 * Return: Always 0
*/
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 9 && b < 9)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
			b++;
		}
	}
	putchar('\n');
		return (0);
}

