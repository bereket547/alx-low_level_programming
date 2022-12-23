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
k /= 10;
if (k != 0)
print_number(k);
_putchar((unsigned int) n % 10 + '0');
_putchar('\n');
return (0);
}
