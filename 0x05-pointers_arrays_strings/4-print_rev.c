#include"main.h"

/**
 * print_rev - print a reverse string
 * @s: string value
 * Return: no return
 */

void print_rev(char *s)
{
int rev = 0;
while (s[rev] != '\0')
{
rev++;
}
for (rev -= 1 ;  rev >= 0 ; rev--)
{
_putchar(s[rev]);
}
_putchar('\n');
}

