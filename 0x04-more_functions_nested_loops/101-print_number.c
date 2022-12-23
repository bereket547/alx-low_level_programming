#include"main.h"

/**
 * print_number - print numbers
 * @n: input number
 * Description: print integers
 *
 * Return: always return 0
 */

void print_number(int n)
{

if (n < 0)
{
n = n * -1;
_putchar('-');
}
if (n < 10 && n >= 0)
_putchar(n + '0');
if ((n >= 10) && (n <= 99))
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if ((n >= 100) && (n <= 999))
{
_putchar((n / 100) + '0');
_putchar(((n % 100) / 10) + '0');
_putchar(((n % 100) % 10) + '0');
}  
if ((n >= 1000) && (n <= 9999))
{
_putchar((n / 1000) + '0');
_putchar(((n % 1000) / 100) + '0');
_putchar((((n % 1000) % 100) / 10) + '0');
_putchar((((n % 1000) % 100) % 10) + '0');
}
_putchar('\n');
return (0);
}
