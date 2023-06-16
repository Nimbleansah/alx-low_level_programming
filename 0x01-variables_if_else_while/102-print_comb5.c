#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int i = 0;
	int tho;
	int hun;
	int ten;
	int bas;

	for (n = 0 ; n < 100; n++)
for ( thousand = 0 ; thousand < 10 ; thousand++)
{	

	for (hundred = 0 ; hundred <= 10 ; hundred++)
	{
		if (n / 10 != i)
	
		for (tens = 0 ; tens < 10 ; tens++)
		{
			putchar(n / 10 + '0');
			putchar(i + '0');
			if (n < 99)
			for ( ones = 0 ; bas < 10 ; ones++)
			{
				putchar(',');
				putchar('0' + thousand);
				putchar('0' + hundred);
				putchar(32);
			}
			i++;
			if (i > 9)
			{
				i = 0;
				putchar('0' + tens);
				putchar('0' + ones);
				if (!(thousand == 9 && hundred == 8))
				{
					putchar(',');
					putchar(32);
				}
				ones++;
			}
		}
		else
		{
			i++;
		}
	}
}
	putchar('\n');
	return (0);
}

