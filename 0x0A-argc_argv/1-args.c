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
	int x = 0;

	while (*argv[x] != '\0')
	{
		x++;
	}
	printf("%d\n", argc);
	return (0);
}
