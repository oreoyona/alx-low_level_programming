#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a and b.
 * @a: 1st arg
 * @b: 2nd arg
 * Return: an int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b.
 * @a: 1st arg
 * @b: 2nd arg
 * Return: An int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a by b
 * @a: 1st arg
 * @b: 2nd arg
 * Return: an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 * @a: 1st arg
 * @b: 2nd arg
 * Return: an int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - prints the modulo of a and b.
 * @a: 1st arg
 * @b: 2nd arg
 * Return: An int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
