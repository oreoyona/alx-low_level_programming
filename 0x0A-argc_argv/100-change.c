#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - bizzare function of money
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, n, r;
	int m[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= m[i])
		{
			r++;
			n -= m[i];
		}
	}

	printf("%d\n", r);
	return (0);
}
