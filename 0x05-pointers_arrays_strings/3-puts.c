#include"main.h"

/**
 * _puts - print a string
 * @str: string value
 * Return: no return
 */

void _puts(char *str)
{

for (; *str != '\0' ; str++)
{
_putchar(str + '0');
}
_putchar('\n');
}

}
