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

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
