#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the given character is lower case
 *
 * Return: 1 (True) else 0 (False)
 */
int _islower(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	return (0);
}

