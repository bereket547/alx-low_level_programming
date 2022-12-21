#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: 'print + if it is positive, - for negative else 0'
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
if (n < 0)
{
n = n * -1;
_putchar(n);
}
else if (n == 0 || n > 0)
_putchar(n);

_putchar(' ');

return (0);

}
