#include <stdio.h>
/**
 * main - finds and prints the sums of the even-valued terms
 * By Basily 
 * Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, y, next, sums;

	j = 1;
	y = 2;
	sums = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sums = sums + j;
		}
		next = j + y;
		j = y;
		y = next;
	}

	printf("%lu\n", sums);

	return (0);
}

