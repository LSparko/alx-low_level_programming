#include <stdio.h>

/**
 * main - print number of arguements passed to it
 * @argc: number of arguement passed
 * @argv: an array of strings of arguement
 *
 * Return: 0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
