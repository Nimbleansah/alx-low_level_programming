#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *  
 * by Basily
 * Always 0.
 */
int main(void)
{
	int count;
	unsigned long fiber1 = 0, fiber2 = 1, sums;

	for (count = 0; count < 50; count++)
	{
		sums = fiber1 + fiber2;
		printf("%lu", sums);

		fiber1 = fiber2;
		fiber2 = sums;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

