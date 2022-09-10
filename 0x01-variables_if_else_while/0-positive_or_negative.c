#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - the main function determine wether or no
* a number is positive or not or is just 0
* Return: 0 if if the program succeds
*/
int main(void)
{
	int n;

	srand(time(0));
	n = road() - RAND_MAX / 2;
	if (n<0)
	printf("%d is negative\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is positive", n);
	return (0);

}
