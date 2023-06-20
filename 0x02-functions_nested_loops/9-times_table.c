#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *by basily
 */
void times_table(void)
{
	int i, x, k;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			k = x * i;
			if (x == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && x != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
