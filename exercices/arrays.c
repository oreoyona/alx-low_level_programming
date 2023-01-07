#include <stdio.h>
#define TRUE 0
#define FALSE -1
/**
 * main - entry point of our program
 * Return: 0
 */
int main()
{
	int t[3][4];
	int i;
	int j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			t[i][j] = j;
	}
	for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 4; j++)
                        printf("t[%d][%d]: [%d]\n", i, j, t[i][j]);
        }
	return (TRUE);
}
