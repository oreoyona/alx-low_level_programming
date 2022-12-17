#include "main.h"
/**
 * _isdigit - verify if a char is a digit
 * @c: a char
 * Return: 0 if c is a digit
 * -1 otherwise
 */
int _isdigit(char c)
	
{
	int x = 0;
	
	if (c < '0' || c > '9')
		x = -1;
	return (x);	
}
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
		{
			sign = -1;
			i++;
		}
		else if (s[i] == '+')
		{
			i++;
			sign = 1;
		}
		else if (_isdigit(s[i] == -1))
		{
			sign = 0;
			i++;
		}
		else
			x = x * 10 + s[i] - '0';
	}
	return (sign * x);
}
