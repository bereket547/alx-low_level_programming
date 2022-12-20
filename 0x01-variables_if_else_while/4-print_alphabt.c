#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printing lowercase a-z'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == 'e')
ch = 'f';
if (ch == 'q')
ch = 'r';
putchar(ch);
}

putchar('\n');
return (0);
}
