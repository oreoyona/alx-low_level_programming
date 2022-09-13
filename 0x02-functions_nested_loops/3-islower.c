#include "main.h"

/**
 * _islower - tells if the given letter is lowercase or not
 * @c: the character of type int to be checked
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (c == letter)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);
}
