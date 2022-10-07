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
	unsigned int x, y = 0;
	char *z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < siz(s2))
		z = malloc(sizeof(char) * (siz(s1) + n + 1));
	else
		z = malloc(sizeof(char) * (siz(s1) + siz(s2) + 1));
	if (!z)
		return (NULL);
	while (x < siz(s1))
	{
		z[x] = s1[x];
		x++;
	}
	while (n < siz(s2) && x < (siz(s1) + n))
	{
		z[x++] = s2[y++];
	}
	while (n >= siz(s2) && x < (siz(s1) + siz(s2)))
		z[x++] = s2[y++];
	z[x] = '\0';

	return (z);
}
