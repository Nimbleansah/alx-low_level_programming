#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * By basily
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, e, longi;

	longi = 0;

	for (x = 0; str[a] != '\0'; x++)
		longi++;

	e = (longi / 2);

	if ((longi % 2) == 1)
		e = ((longi + 1) / 2);

	for (x = e; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
