#include "main.h"
/**
 * by basily
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, m;

	i = 0;

	while (i < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
