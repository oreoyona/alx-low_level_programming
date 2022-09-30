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
	unsigned int a = (unsigned int) *argv[0];
	unsigned int b = (unsigned int) *argv[1];

	if (argc == 1)
		printf("%s\n", "Error");
	else
		printf("%d\n", a * b);
	return (0);
}
