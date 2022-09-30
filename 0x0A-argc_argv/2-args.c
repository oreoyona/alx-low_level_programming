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
	unsigned long y = (unsigned long) argc;

	for (x = 0; x < y; x++)
		printf("%s\n", argv[x]);
	return (0);
}
