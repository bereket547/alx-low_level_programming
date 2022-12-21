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
return (z);
}
else if (n < 0)
{
z = n * -1;
z = z % 10;
return (0);
}
else
return (0);

_putchar(' ');

return (0);

}
