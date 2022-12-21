#include "main.h"

/**
 * print_sign - Entry point
 * @n: single letter input
 * Description: 'print + if it is positive, - for negative else 0'
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
}
if (n < 0)
{
return (-1);
_putchar('-');
}
else
{
return (0);
_putchar('0');
}
_putchar('\n');

}
