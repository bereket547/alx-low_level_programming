#include<stdio.h>
#include<math.h>

/**
 * main - print prime numbers
 * 
 * Description: print prime numbers of 612852475143
 *
 * Return: no return
 */

int main(void)
{
long greater, a, b;
double square
  
a = 612852475143;
square = sqrt(a);

for(b = 1 ; b <= square ; b++)
{
if ((a % b) == 0)
greater = a / b;
}
printf("%ld\n", greater);
return (0);
}
