#include<stdio.h>
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
if (n >= 98)
{
for ( ; n >= 98 ; n--)
{
printf("%d", n);
if (n == 98)
break;
printf(",");
printf(" ");
}
}
else
{
for ( ; n <= 98 ; n++)
{
printf("%d", n);
if (n == 98)
break;
_putchar(',');
_putchar(' ');
}
}
}
   
