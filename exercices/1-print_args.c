#include <stdio.h>
/**
 * main - prints all the args
 * @ac: number of args
 * @av: array of args
 * Return: 0
 */
int main(int ac, char **av)
{
	int i;

	for (i = 1; av[i] != 0; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
