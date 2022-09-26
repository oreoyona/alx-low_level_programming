#include "main.h"
/**
 * _memset - return a pointer to a pointer
 * @s: a char
 * @b: another char
 * @n: an unsigned int
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	s = &b;
	*s = b;

	return (s);
}
