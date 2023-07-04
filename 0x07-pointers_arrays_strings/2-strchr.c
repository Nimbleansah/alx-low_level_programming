#include "main.h"
/**
 * _strchr - Entry point
 * @a: input
 * @c: input
 * return: Always 0 (Success)
 */
char *_strchr(char *a, char c)
{
	int i = 0;

	for (; a[i] >= '\0'; i++)
	{
		if (a[i] == c)
			return (&a[i]);
	}
	return (0);
}

