#include <stdio.h>
#include <math.h>
/**
 *  finds and prints the largest prime 
 *  with a new line,by basily
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int maxi;
	long int i;

	a = 612852475143;
	maxi = -1;

	while (a % 2 == 0)
	{
		maxi = 2;
		a /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (a % i == 0)
		{
			maxi = i;
			a = a / i;
		}
	}

	if (a > 2)
		maxi = n;

	printf("%ld\n", maxi);

	return (0);
}
