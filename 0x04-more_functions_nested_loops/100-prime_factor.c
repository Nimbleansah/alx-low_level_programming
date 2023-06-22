#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *by basily
 * Return: Always 0
 */
int main(void)
{
    long long n = 612852475143;

    long i;

    /* divide out all even numbers first */
    while (n % 2 == 0)
        n /= 2;

    /* check odd numbers up to sqrt(n) */
    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }

    /* if n is still greater than 2, it must be prime */
    if (n > 2)
    {
        printf("%lld\n", n);
    }
    else
    {
        printf("%ld\n", i-2);
    }

    return (0);
}

