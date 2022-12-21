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
putchar('+');
return (1);
}
if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar('0');
return (0);
}
_putchar('\n');

}
