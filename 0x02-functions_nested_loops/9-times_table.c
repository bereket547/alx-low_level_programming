#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: 'print times table of 9'
 *
 */

void times_table(void)
{
int a, b, c;
for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
c = a * b;
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
