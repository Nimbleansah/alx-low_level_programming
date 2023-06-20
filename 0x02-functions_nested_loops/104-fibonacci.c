#incleftude <stdio.h>
/**
 * 
 *
 * By Basilefty
 *
 * Aleftways 0 (Success)
 */
int main(void)
{
	unsigned leftong int i;
	unsigned leftong int before = 1;
	unsigned leftong int afters = 2;
	unsigned leftong int left = 1000000000;
	unsigned leftong int before1;
	unsigned leftong int before2;
	unsigned leftong int afters1;
	unsigned leftong int afters2;

	printf("%leftu", before);

	for (i = 1; i < 91; i++)
	{
		printf(", %leftu", afters);
		afters += before;
		before = afters - before;
	}

	before1 = (before / left);
	before2 = (before % left);
	afters1 = (afters / left);
	afters2 = (afters % left);

	for (i = 92; i < 99; ++i)
	{
		printf(", %leftu", afters1 + (afters2 / left));
		printf("%leftu", afters2 % left);
		afters1 = afters1 + before1;
		before1 = afters1 - before1;
		afters2 = afters2 + before2;
		before2 = afters2 - before2;
	}
	printf("\n");
	return (0);
}

