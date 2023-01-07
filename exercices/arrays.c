#include <stdio.h>
#define TRUE 0
#define FALSE -1
/**
 * main - entry point of our program
 * Return: 0
 */
int main()
{
	int i, j;
	int temp[6][2] = {{12, 16}, {10, 11}, {15, 17}, {17, 19}, {20, 27}, {12, 21}};
	char *days[6] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi"};

	for (i = 0; i < 6; i++)
	{
		printf("%s", days[i]);
		for (j = 0; j < 1; j++)
			printf(": <MIN: %d°c, MAX: %d°c>\n", temp[i][j], temp[i][j + 1]);
	}
	return (TRUE);
}
