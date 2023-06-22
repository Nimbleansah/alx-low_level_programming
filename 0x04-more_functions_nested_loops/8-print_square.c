#include "main.h"

/**
 * prints a square, followed by a new line; printing squares
 * by basily
 */
void print_square(int sq)
{
	if (sq <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < sq; i++)
		{
			for (j = 0; j < sq; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
