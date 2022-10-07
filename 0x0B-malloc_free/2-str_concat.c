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
	unsigned int x, y, z;
	unsigned int l;
	char *a;

	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
	}
	a = malloc(sizeof(char) * (x + l + 1));

	for (y = 0; s1[y] != '\0'; y++)
	{
		a[y] = s1[y];
	}
	for (z = 0; s2[z] != '\0'; z++)
	{
		a[y] = s2[z];
	}
	a[z] = '\0';
	
	return (a);
}
