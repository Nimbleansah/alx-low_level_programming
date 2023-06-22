#include "main.h"

/**
 *print_diagonal ~ draws a diagonal line on the terminal
 * By basily
 */

void print_diagonal(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, x;

		for (i = 0; i < a; i++)
		{
			for (x = 0; x < a; x++)
			{
				if (x == i)
					_putchar('\\');
				else if (x < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

