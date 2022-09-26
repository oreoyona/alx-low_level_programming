#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y = 0;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			__putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
