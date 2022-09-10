#include <stdio.h>
#include <time.h>
/**
 * main - function that determines wether a number is negative or not
 * Return: 0 if the program succeeds and print whever the random number is negative or positive 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0)
		printf("%d is negative \n", n);
	else if(n > 0)
		printf("%d is positive \n", n);
	else
		printf("%d is zero \n", n);
		      
	return (0);
}
