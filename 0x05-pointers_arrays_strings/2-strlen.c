#include"main.h"

/**
 * _strlen - print length of string
 * @s: given string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{

int strlength = 0;
for (; *s != '\0' ; s++)
{
strlength++;
}

return (strlength);
}
