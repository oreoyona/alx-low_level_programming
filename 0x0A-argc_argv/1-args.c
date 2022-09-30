#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: arguments of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	unsigned long x;

	for (x = 1; x < sizeof(argv[x]); x++)
		continue;
	if (argc == 0)
		printf("%d\n", 0);
	printf("%d\n", argc - 1);
	return (0);
}
