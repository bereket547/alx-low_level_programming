#include "main.h"

/**
 * jack_bauer - Entry point
 * @n: input number
 * Description: 'print digit of a 24 hour'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int a, b, c, d;
for (a = 0 ; a < 3 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
for (c = 0 ; c < 10 ; c++)
{
for (d = 0 ; d < 10 ; d++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
if (c == 5 && d == 9)
break;
}
}
}
}
}
