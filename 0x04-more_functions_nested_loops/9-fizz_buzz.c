#include "main.h"
#include <stdio.h>

/**
 * printing the numbers from 1 - 100, followed by a new line for each
 * by basily 
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 != 0)
		{
			printf(" Fizz");
		} else if (j % 5 == 0 && j % 3 != 0)
		{
			printf(" Buzz");
		} else if (j % 3 == 0 && j % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (j == 1)
		{
			printf("%d", j);
		} else
		{
			printf(" %d", j);
		}
	}
	printf("\n");

	return (0);
}

