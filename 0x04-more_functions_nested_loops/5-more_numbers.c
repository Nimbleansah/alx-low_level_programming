#include "main.h"

/**
 * more_numbers - print more numbers
 * by basily
 */

void more_numbers(void)
{
	int x, j;

	for (x = 1; x <= 10; x++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}

