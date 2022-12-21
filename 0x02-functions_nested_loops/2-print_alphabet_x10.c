#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: 'print lower case alphabets 10 times'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int c, b = 0;
while (b < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
b++;
}

}
