#include"main.h"

/**
 * print_diagonal - print a \
 * @n: length of the diagonal
 * Description: print a diagonal
 *
 * Return: no return
 */

void print_diagonal(int n)
{
int a;

if (n == 0 || n < 0)
_putchar('\n');
else
{
for (a = 0 ; a < n ; a++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
