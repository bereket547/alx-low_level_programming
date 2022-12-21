#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'print lower case alphabets'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int c = 'a';
int b;
while (b < 10)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
b++;
}

_putchar('\n');

}
