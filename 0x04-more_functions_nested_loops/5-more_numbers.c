#include"main.h"

/**
 * more_numbers - print 0-14 10 times
 *
 * Description: print numbers 0-14
 *
 * Return: no return
 */

void more_numbers(void)
{
  int a, b;

for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b <= 14 ; b++)
{
_putchar(b + '0');
}
_putchar('\n');
}

_putchar('\n');
}
