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
int main(int argc, char *argv[])
{
	int arg1, arg2, x;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	x = func(arg1, arg2);

	printf("%d\n", x);

	return (0);
}
