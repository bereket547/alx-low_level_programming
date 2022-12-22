#include"main.h"

/**
 * print__most_numbers - print 0-9 except 2 and 4
 *
 * Return: no return
 */

void print_most_numbers(void)
{
int a;

for (a = 48 ; a <= 57 ; a++)
{
if (a == 50 || a == 52)
continue;
else
_putchar(a);
}
_putchar('\n');
}
