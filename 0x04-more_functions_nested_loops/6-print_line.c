#include "main.h"

/**
 *  draws a straight line in the terminal
 * by basily
 */
void print_line(int j)
{
	if (j <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= j; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

