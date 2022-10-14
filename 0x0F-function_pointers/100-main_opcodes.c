#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to prints a struct
 * @argc: number of args
 * @argv: array of args
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int x, b;
	char *list;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	list = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", list[x]);
			break;
		}
		printf("%02hhx\n", list[x]);
	}
	return (0);
}
