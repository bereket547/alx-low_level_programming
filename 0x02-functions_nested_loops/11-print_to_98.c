#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: input number
 * Description: 'print from given number to 98'
 *
 * Return: void
 */

void print_to_98(int n)
{
if (n < 98)
{
for (n ; n <= 98 ; n++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
for (n ; n >= 98 ; n--)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
}
   
