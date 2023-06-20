/*
 * File: 101-natural.c
 * By Basily
 */

#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *       
 *
 *  Always 0.
 */
int main(void)
{
	int i, sums = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sums += i;
	}

	printf("%d\n", sums);

	return (0);
}

