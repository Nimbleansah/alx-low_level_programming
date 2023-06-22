#include "main.h"

/**
 * isdigit - check if numbers are 0 to 9
 * by basily
 *
 * Return: 0 or 1
 */

int _isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

