#include <stdio.h>

#include <time.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n < 0)
		print("is negative\n");
	else if(n > 0)
		print("is positive\n");
	else
		print("ia zero\n");
		      
	return (0);
}
