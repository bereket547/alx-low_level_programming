#include "main.h"

/**
 * print_times_table - Entry point
 * @n: input number
 *
 * Description: 'print times table of 9'
 *
 */

void print_times_table(int n)
{
int a, b, c;
if (n > 15 || n < 0)
break;
else
{
for (a = 0 ; a < n ; a++)
{
for (b = 0 ; b < n ; b++)
{
c = a * b;
if (c < 10)
{
if (b == n)
{
_putchar(c + '0');
break;
}
else
{
_putchar(c + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
if (c >= 10)
{
if (b == n)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
break;
}
else
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
