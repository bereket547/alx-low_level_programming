#include "main.h"

/**
 * jack_bauer - Entry point
 * @n: input number
 * Description: 'print digit of a 24 hour'
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int a, b;
for (a = 0 ; a < 24 ; a++)
{
for (b = 0 ; b < 60 ; b++)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((b /10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
}
}
}
