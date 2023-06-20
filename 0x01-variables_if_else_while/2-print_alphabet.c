#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int count;
        char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

        for (count = 0; count < 26; count++)
        {
                putchar(alphabet[count]);
        }
        putchar('\n');

        return (0);
}
