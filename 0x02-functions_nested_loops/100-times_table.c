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
int a, b, c, i;
if (n < 15 || n > 0)
{
for (a = 0 ; a <= n ; a++)
{
for (b = 0 ; b <= n ; b++)
{
c = a * b;
if (c < 10)
{
_putchar(c + '0');
if (b != n)
{
_putchar(',');
for(i = 0 ; i < 3 ; i++)
{
_putchar(' ');
}
}
}
if (c >= 10 && c < 100)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
if (b != n)
{
_putchar(',');
for (i = 0 ; i < 2 ; i++)
{
_putchar(' ');
}
}
}
if (c > 100 && c < 1000)
{
_putchar((c / 100) + '0');
_putchar(((c % 100) / 10) + '0');
_putchar((c % 10) + '0');
if (b != n)
{
_putchar(',');
_putchar(' ');	
}
}
if (c > 1000)
{
_putchar((c / 1000) + '0');
_putchar(((c % 1000) / 100) + '0');
_putchar((((c % 1000) % 100) / 10) + '0');
_putchar((c % 10) + '0');
}
} 
_putchar('\n');
}
}
}
