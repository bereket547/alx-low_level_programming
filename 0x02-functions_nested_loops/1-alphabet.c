#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'print _putchar'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}

_putchar('\n');

return (0);
}
