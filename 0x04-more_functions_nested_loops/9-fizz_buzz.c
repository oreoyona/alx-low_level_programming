#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - print the 100 first digit
 * all multiple of 3 are replaced by fizzbuzz
 * Return: void
 */
void fizzbuzz(void)
{
	int x = 0;

	for (x = 0; x < 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		printf("%d", x);
	}
}
