#include "main.h"
#include<stdio.h>

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
putchar('-');
}
if (n < 10 && n >= 0)
putchar(n + '0');
if ((n >= 10) && (n <= 99))
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
}
if ((n >= 100) && (n <= 999))
{
putchar((n / 100) + '0');
putchar(((n % 100) / 10) + '0');
putchar(((n % 100) % 10) + '0');
}
if ((n >= 1000) && (n <= 9999))
{
putchar((n / 1000) + '0');
putchar(((n % 1000) / 100) + '0');
putchar((((n % 1000) % 100) / 10) + '0');
putchar((((n % 1000) % 100) % 10) + '0');
}
putchar('\n');
}
