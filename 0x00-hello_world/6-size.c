#include <stdio.h>

/**
 * main - function print the size of types
 * Return: 0 if the program runs without error
 */

int main(void)
{
	int integer;
	char character;
	long lg;
	long long veryLong;
	float decimal;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of an int: %ld byte(s)\n", sizeof(integer));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lg));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(veryLong));
	printf("Size of a float: %ld byte(s)\n", sizeof(decimal));
	return (0);
}
