#include <stdio.h>
int smallest(int *arr)
{
	int actual, next, i, s;
	s = arr[0];
	actual = arr[0];
	next = arr[0];

	for (i = 1; i < 5; i++)
	{
		if (arr[i] < actual)
		{
			actual = arr[i];
		}
		if (arr[i] > next)
			next = arr[i];
	}
	s = actual;
	return (s);
}


int main()
{
	int g[5] = {2, 4, -8, 1, -80};
	printf("%d\n", smallest(g));

	return (0);
}
