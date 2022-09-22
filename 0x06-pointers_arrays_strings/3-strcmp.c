#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: the frist string
 * @s2: the second string
 * Return: an int/0 if there is a match
 * 1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	for (count = 0; s1[count] != '\0' || s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
	}
	return (0);
}
