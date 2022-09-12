#include <stdio.h>

/**
 * main - prints the first 100 digits
 * Return: 0 uppon success and 1 otherwise
 */
int main(void)
{
	int num1, num2;
	
	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if((num1 % 10) != ((num1 % 10) * 10) && (num2 % 10) != ((num2 % 10) * 10)))
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
			}
			if (num1 == 9 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
