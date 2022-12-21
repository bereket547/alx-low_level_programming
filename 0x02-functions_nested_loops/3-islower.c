#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: 'print if the letter is lower'
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
_putchar('\n');

}
