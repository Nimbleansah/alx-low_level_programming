#include "stdio.h"

/**
 * print_last_digit - will print the last digit of a given number.
 *
 *
 * Return: last digit as int value.
 */
int print_last_digit(int a)
{
	a %= 10;
	if (a < 0)
	{
		a *= -1;
	}
	_putchar('0' + a);
	return (a);
}

