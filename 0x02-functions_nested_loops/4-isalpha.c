#include "main.h"

/**
 * _isalpha - tells if the givennumber is or not a letter
 * @c: the character of type int to be checked
 * Return: 1 if c is a letter
 * 0 otherwise
 */
int _isalpha(int c)
{
	int letter;
	int code = 0;

	for (letter = 65; letter <= 122; letter++)
	{
		if (c == letter)
		{
			code = 1;
		}
	}
	return (code);
}
