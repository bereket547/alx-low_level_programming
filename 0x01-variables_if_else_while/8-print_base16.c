#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printing base 16 numbers'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
int a;

for (a = 0 ; a < 10 ; a++)
putchar(a % 10 + '0');

for (ch = 'a' ; ch <= 'f' ; ch++)
putchar(ch);

putchar('\n');
return (0);
}
