#include "main.h"

/**
 * _isupper - Tests weather a char is in uppercase
 * @c: The char to be tested
 * Return: 1 if c is in uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i;
	int code = 0;

	for (i = 'A';  i <= 'Z'; i++)
	{
		if (c == i)
		{
			code = 1;
		}
	}
	return (code);
}
