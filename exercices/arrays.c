#include <stdio.h>
#define TRUE 0
#define FALSE -1
/**
 * main - entry point of our program
 * Return: 0
 */
int main()
{
	char *t[7][7];
	int i;
	int j;
	
	char *days[7] = {"Lundi", "Mardi", "Mercredi", "samedi", "dimanche"};
	char *temp[7] = {"33", "27", "30", "19", "31", "27", "34"};

	for (i = 0; i < 7; i++)
	{
		t[i][0] = days[i];
	}
	for (i = 0; i < 7; i++)
        {
                for (j = 0; j < 7; j++)
                        printf("t[%v][%c]: [%c]\n", i, j, t[i][j]);
        }
	return (TRUE);
}
