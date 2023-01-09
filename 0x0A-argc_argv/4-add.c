#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive integers
 * @argc: number of arguments
 * @argv: pointer of an array of the arguments
 *
 * Return: 1 if one if the numbers contains symbols that are not digits
 * otherwise,return 0
*/

int main(int argc, char *argv[])
{
	int i, digit, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

