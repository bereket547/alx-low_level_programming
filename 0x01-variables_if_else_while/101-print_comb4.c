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
int a, b, c;
c = 0;

for (a = c ; a < 9 ; a++)
{
for (b = a + 1 ; b < 10 ; b++)
{
putchar(a % 10 + '0');
putchar(b % 10 + '0');
if (a == 8 && b == 9)
break;
putchar(',');
putchar(' ');
}
c = c + 1;
}

putchar('\n');
return (0);
}
