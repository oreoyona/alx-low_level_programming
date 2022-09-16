#include <stdio.h>

/**
 * fizzbuzz - print the 100 first digit
 * all multiple of 3 are replaced by fizzbuzz
 * Return: void
 */
void fizzbuzz(void)
{
	int x = 1;

	for (x = 1; x < 101; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
				printf("Buzz ");
				printf("\n");
			}
			else
			{
				printf("Fizz ");
				continue;
			}
			continue;
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		printf("%d ", x);
	}
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