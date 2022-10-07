#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string we will be working on
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int x = 0;
	unsigned int l = 0;

	if (str == NULL)
		return (NULL);
	for (l = 0; str[l] != '\0'; l++)
	{
	}
	a = malloc(sizeof(char) * (l + 1));

	if (a == NULL)
		return (NULL);
	while ((a[x] = str[x]) != '\0')
		x++;
	return (a);
}
