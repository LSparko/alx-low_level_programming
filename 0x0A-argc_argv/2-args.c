#include <stdio.h>

/**
 * main - print all arguements it recieves
 * @argc: number of arguements
 * @argv: array of pointers to the arguements
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
