#include "main.h"
/**
 * printing triangles - prints a triangle, followed by a new line
 * by basily
 */
void print_triangle(int tri)
{
	if (tri <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= tri; i++)
		{
			for (j = i; j < tri; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

