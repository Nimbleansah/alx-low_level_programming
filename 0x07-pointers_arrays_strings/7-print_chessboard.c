#include "main.h"
/**
 * print_chessboard - Entry point
 * @z: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*z)[8])
{
	int a;
	int j;

	for (a = 0; a < 8; a++)
	{
		for (j = 0; j < 8; j++)
			_putchar(z[a][j]);
		_putchar('\n');
	}
}

