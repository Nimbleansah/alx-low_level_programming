#include "main.h"

/**
 * print_sign - prints the sign of the given number +/-
 * on: Number to be tested
 *
 *
 */
int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

