#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'print summation of Fibonacci even numbers'
 *
 * Return: Always zero(Success)
 */

int main(void)
{
long int x, a, sum, even = 0, new = 1;
sum = 0;
for (x = 0 ; x < 50 ; x++)
{
a = sum + new;
if (a < 4000000 && ((a % 2) == 0))
even = even + a;  
sum = new;
new = a;
}
printf("%ld", even);
printf("\n");

return (0);
}
