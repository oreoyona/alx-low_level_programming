#include "main.h"
#include <stdlib.h>

/**
 * siz - determines the size of a string
 * @s: the string we will work on
 * Return: an int, the size of the string
 */
unsigned int siz(char *s)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	return (x);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the string that will be adde to s1
 * @n: the size of the memory to alocate
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y;
	char *z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < siz(s2))
		z = malloc(sizeof(char) * (siz(s1) + n + 1));
	else
		z = malloc(sizeof(char) * (siz(s1) + siz(s2) + 1));
	if (z == 0)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		z[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
		z[x] = s2[y];
	z[x] = '\0';

	return (z);
}
