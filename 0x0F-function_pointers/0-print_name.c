#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: the name to be printed
 * @f: the function that will actually print the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

