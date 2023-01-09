#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: pointer to an array of arguements
 *
 * Return: 1 if program does not recieve two arguements
 * and 0 if it recieves two arguements
*/

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);

	return (0);
}
