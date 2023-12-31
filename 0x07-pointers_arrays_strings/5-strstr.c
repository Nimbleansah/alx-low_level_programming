#include "main.h"
/**
 * _strstr - Entry point
 * @stack: input
 * @needle: input
 * return: always 0 (Success)
 */
char *_strstr(char *stack, char *needle)
{
	for (; *stack != '\0'; stack++)
	{
		char *l = stack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (stack);
	}

	return (0);
}

