#include "main.h"

/**
 * add - Entry point
 * @a , @b : input numbers
 * Description: 'print addition of two numbers'
 *
 * Return: Always 0 (Success)
 */

void add(int a, int b)
{
if ((a + b) > -10 && (a + b) < 10)
_putchar((a + b) + '0');
else
{
_putchar(((a + b) / 10) + '0');
_putchar(((a + b) % 10) + '0');
}
_putchar('\n');
return (0);
}
