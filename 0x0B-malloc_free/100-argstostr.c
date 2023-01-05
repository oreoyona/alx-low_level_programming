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
	i2 = 0;

	/*let us handle the first exception*/
	if (ac <= 1 || av == NULL)
		return (NULL);
	/*let us find the length of our args*/
	for (; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2] != '\0'; i2++)
		{
			len++;
		}
		len++;
	}
	/* having the size of our string, let's build the pointer */
	str = malloc((sizeof(*av) * len) + 1);
	if (str == NULL)
		return (NULL);
	for (i1 = 0; i1 < ac; i1++)
	{
		for (i2 = 0; av[i1][i2] != '\0'; i2++)
		{
			str[i3] = av[i1][i2];
			i3++;
		}
		str[i3] = '\n';
		i3++;
	}
	str[i3] = '\0';
	return (str);
}
