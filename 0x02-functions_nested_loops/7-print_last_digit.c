#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: input number
 * Description: 'print digit of any integer'
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int z;
if (n > 0)
{
z = n % 10;
_putchar(z + '0');
return (z);
}
else if (n < 0)
{
z = n % 10;
z = -1 * z;
_putchar(z + '0');
return (z);
}
else
{
z = n % 10;
_putchar(z + '0');
return (z);
}

_putchar(' ');

}
