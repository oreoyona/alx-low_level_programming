#include <stdio.h>

/**
 * fizzbuzz - print the 100 first digit
 * all multiple of 3 are replaced by fizzbuzz
 * Return: void
 */
void fizzbuzz(void)
{
	int x = 1;

	for (x = 1; x < 100; x++)
	{
		if (x % 3 == 0)
		{
			printf(" Fizz ");
			continue;
		}
		else if (x % 5 == 0)
		{
			printf(" Buzz ");
			continue;
		}
		else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz ");
			continue;
		}
		printf("%d ", x);
	}
	printf("\n");
}

/**
 * main - call the fizzbuzz function
 * Return 0 upon success
 */
int main(void)
{
	fizzbuzz();
	return (0);
}
