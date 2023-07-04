#include "main.h"
/**
 * By basily
 * @v starting address of memory to be filled
 * @b the desired value
 * @x number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *v, char b, unsigned int x)
{
	int i = 0;

	for (; x > 0; i++)
	{
		v[i] = b;
		x--;
	}
	return (v);
}

