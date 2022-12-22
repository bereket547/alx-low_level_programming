#include"main.h"

/**
 * print_diagonal - print a backlash
 * @n: length of the diagonal
 * Description: print a diagonal
 *
 * Return: no return
 */

void print_diagonal(int n)
{
int a, b;

if (n <= 0)
_putchar('\n');
else
{
for (a = 0 ; a < n ; a++)
{
for (b = 0 ; b < a ; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
