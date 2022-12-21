#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print numbers separated by , and $ sign'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, d, e;

for (a = 0 ; a < 10 ; a++)
{
for (b = 0 ; b < 10 ; b++)
{
for (d = 0 ; d < 10 ; d++)
{
for (e = 0 ; e < 10 ; e++)
{
if (((a + e) == (b + d)) && ((a * e) == (b * d)))
e = e + 1;
putchar(a % 10 + '0');
putchar(b % 10 + '0');
putchar(' ');
putchar(d % 10 + '0');
putchar(e % 10 + '0');
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');
return (0);
}
