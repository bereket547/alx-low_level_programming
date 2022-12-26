#include"main.h"

/**
 * rev_string - print a reverse string
 * @s: string value
 * Return: no return
 */

void rev_string(char *s)
{
int rev = 0, a = 0;
while (s[rev] != '\0')
{
rev++;
}
for (rev -= 1 ;  rev >= 0 ; rev--)
{
s[a] = (s[rev]);
a++;
}
_putchar('\n');
}

