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
char lo, up;

for (lo = 'a' ; lo <= 'z' ; lo++) 
putchar(lo);

for (up = 'A' ; up <= 'Z' ; up++)
putchar(up);
  
putchar('\n');
  
return (0);  
}
