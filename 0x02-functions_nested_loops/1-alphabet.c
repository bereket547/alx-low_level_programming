#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'print lower case alphabets'
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

}
