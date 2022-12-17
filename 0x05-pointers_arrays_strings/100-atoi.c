#include "main.h"
/**
 *_atoi - mimics the atoi function of stdlib
 * @s: the string
 * Return: an int version of the string
 */
int _atoi(char *s)
{
	int x = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -1;
		x = x * 10 + s[i] + '0';
	}
	return (sign * x);
}
