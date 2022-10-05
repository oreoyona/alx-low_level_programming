#include <unistd.h>

/**
 * _putchar - prints to the std output
 * @c: the char to be printed
 * Return: always 0 upon success
 */
int _putchar(char c);
/**
 * isInteger - checks if a given string is an int
 * @s: the string to be checked
 * Return: 0 uppon success
 */
int isInteger(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] < '0' || s[x] > '9')
		{
			return (1);
		}
		x++;
	}
	return (0);
}
