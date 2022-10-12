#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - the main func
 * @argc: an int
 * @argv: an array
 * Return: an int
 */
int main(int argc, char[] *argc)
{
	int (*d)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	d = get_op_func(argv[2]);

	if (d == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", d(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
