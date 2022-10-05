#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: arguments of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		printf("%d\n", x * y);
	}

	return (0);
}
