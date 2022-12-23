#include"main.h"

/**
 * print_rev - print a reverse string
 * @s: string value
 * Return: no return
 */

void print_rev(char *s)
{

for (; *s != '\0' ; s--)
{
_putchar(*s);
}
_putchar('\n');
}

