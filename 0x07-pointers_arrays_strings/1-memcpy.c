#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@m: memory where is stored
 *@mc: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *m, char *mc, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		m[r] = mc[r];
		n--;
	}
	return (m);
}

