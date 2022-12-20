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
int a, b;

for (a = 1 ; a < 10 ; a++)
{
  for(b = 0 ; b < 9 ; b++)
    {
putchar(b % 10 + '0');
 putchar(a % 10 + '0');
 putchar(',');
}
putchar(' ');
b = b + 1;
}

putchar('\n');
return (0);
}
