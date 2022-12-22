#include"main.h"

/**
 * _isupper - tell the letter if it is upper case
 *
 * @c: input character
 *
 * Return: Always zero
 */

int _isupper(int c)
{
int a, x = 0;

for (a = 'A' ; a <= 'Z' ; a++)
{
if (a == 'c')
{
x = x + 1;
return (1);
}
}
if (x == 0)
return (0);
}
