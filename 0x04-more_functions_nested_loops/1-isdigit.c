#include "main.h"
/**
 * _isdigit - tests wether a given cher is a digit
 * @c: the char to be tested
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	int i = 0;
	int code = 0;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			code = 1;
		}
	}
	return (code);
}
