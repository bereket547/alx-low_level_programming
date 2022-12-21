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
int c;
if (n > 0)
{
c = n % 10;
_putchar(c);
return (c);
}
else if (n < 0)
{
c = n * -1;
c = c % 10;
_putchar(c);
return (0);
}
else
{
_putchar(c);
return (0);
}

_putchar(' ');

return (0);

}
