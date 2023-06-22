#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char a;

    a = '0';
    printf("%c: %d\n", a, _isdigit(a));
    a = 'a';
    printf("%c: %d\n", a, _isdigit(a));
    return (0);
}
