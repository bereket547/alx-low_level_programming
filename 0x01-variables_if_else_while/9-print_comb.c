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
int a;

for (a = 0 ; a < 10 ; a++)
{
putchar(a % 10 + '0');
if (a == 9)
{
putchar('$');
break;
}
putchar(',');
putchar(' ');
}

return (0);
}
