#include "main.h"
#include <stdlib.h>

/**
 * argstostr - builds a string from
 * arguments given to a terminal
 * @ac: number of args
 * @av: pointer to an array of args
 * Return: a pointer to the new build string
 */
char *argstostr(int ac, char **av)
{
	int len, i1, i2, i3;
	char *str;

	/*len for the length of our string and i are iterators*/
	len = 0;
	i1 = 0;
	i3 = 0;

	if (ac <= 1 || av == NULL)
		return (NULL);
	while (i1 < ac)
	{
		i2 = 0;
		while (av[i1][i2])
		{
			len++;
			i2++;
		}
		len++;
		i2++;
	}
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	i1 = 0;
	while (i1 < ac)
	{
		i2 = 0;
		while (av[i1][i2])
		{
			str[i3] = av[i1][i2];
			i2++;
			i3++;
		}
		str[i3] = '\n';
		i3++;
		i1++;
	}
	str[i3] = '\0';
	return (str);
}
