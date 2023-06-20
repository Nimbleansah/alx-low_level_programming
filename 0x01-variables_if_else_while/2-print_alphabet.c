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
	int count;
	char a[26]="abcdefghijklmnopqrstuvwxyz";
	for (count=0; count <26 ; count++)
	{
		putchar(a[count]);
	}
	putchar('\n');
	return (0);

}
