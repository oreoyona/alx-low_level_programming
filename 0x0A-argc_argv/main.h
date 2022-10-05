#include <unistd.h>

/**
 * _putchar - prints to the std output
 * @c: the char to be printed
 * Return: always 0 upon success
 */
int _putchar(char c);
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
