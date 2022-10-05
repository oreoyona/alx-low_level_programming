#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add 2 or more positive numbers
 * @argc: number of arguments
 * @argv: arguments of the program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int res;
	int l;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (l = 0; l < argc; l++)
		{
			if (isdigit(argv[l]) == 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			else
				res += atoi(argv[l]);
		}
		printf("%d\n", res);
	}

	return (0);
}
