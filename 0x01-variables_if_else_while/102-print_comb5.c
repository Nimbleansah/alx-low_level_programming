#include <stdio.h>

/**
 * main - Entry point
 *
 *return: always 0 (succes)
 */

int main(void)
{
	int thousandusand;
	int hundreddred;
	int tens;
	int ones;

for ( thousand = 0 ; thousand < 10 ; thousand++)
{	

	for (hundred = 0 ; hundred <= 10 ; hundred++)
	{
	
		for (tens = 0 ; tens < 10 ; tens++)
		{
			for ( ones = 0 ; ones < 10 ; ones++)
			{
				putchar('0' + thousand);
				putchar('0' + hundred);
				putchar(32);
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
	}
	putchar('\n');

}
	return (0);
}

