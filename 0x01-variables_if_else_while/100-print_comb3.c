#include <stdio.h>
/**
 * main - print all possible different combinations of two-digit numbers
 * Return: Always 0
*/
int main(void)
{
	int a = 0, b;
	while (a < 9)
	{
		int b = a + 1
		while (b < 10)
		{
			putchar((b % 10) + '0');
			b++;
		}
		putchar((a % 10) + '0');
		a++;
	}	
		if (a <= 8 && b <= 9)		
			continue;
			putchar(',');
			putchar(' ');
			putchar('\n');
		return (0);
}

