#include <stdio.h>

/*
 *
 *main entry point
 * 
 * Return:Always (0) Success
 *
 */
int main(void)
{
	int count = 0;
	char a;
	while (a++ <= 9)
	{
		for (a = 'a'; a <= 'z';a++)
		{
			putchar(a);
		}
		putchar('\n');

	}
	return (0);
}
