#include <stdio.h>
#include "main.h"

/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: arguments of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	unsigned long a = (unsigned long) argv[0];
	unsigned long b = (unsigned long) argv[1];
	unsigned long y = (unsigned long) argc;

	if (y == 1)
		printf("%s\n", "Error");
	else
		printf("%ld\n", a * b);
	return (0);
}
