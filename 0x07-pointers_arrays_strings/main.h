#include <unistd.h>
/**
 * _putchar - mimics the putchar function of std library
 * @c: the char to be printed
 * Return: 1 on success
 * -1 otherwise
 */
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
