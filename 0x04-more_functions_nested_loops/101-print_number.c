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

unsigned int k = n;
if (n < 0)
{
n = n * -1;
k = n;
_putchar('-');
}
if (k < 10 && k >= 0)
_putchar(k + '0');
if ((k >= 10) && (k <= 99))
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
if ((k >= 100) && (k <= 999))
{
_putchar((k / 100) + '0');
_putchar(((k % 100) / 10) + '0');
_putchar(((k % 100) % 10) + '0');
}  
if ((k >= 1000) && (k <= 9999))
{
_putchar((k / 1000) + '0');
_putchar(((k % 1000) / 100) + '0');
_putchar((((k % 1000) % 100) / 10) + '0');
_putchar((((k % 1000) % 100) % 10) + '0');
}
_putchar('\n');
return (0);
}
