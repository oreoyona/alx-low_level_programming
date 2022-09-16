#include "main.h"

/**
 * _isupper - Tests weather a char is in uppercase
 * @c: The char to be tested
 * Return: 1 if c is in uppercase
 * 0 if not
 */
int _isupper(int c)
{
	int i = 0;
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
