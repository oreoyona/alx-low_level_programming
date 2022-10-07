#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: the firt string
 * @s2: the second string
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x;
	unsigned int l;
	char *a = s1;

	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (l = 0; s2[l] != '\0'; x++, l++)
	{
		a[x] = s2[l];
	}
	return (a);
}
