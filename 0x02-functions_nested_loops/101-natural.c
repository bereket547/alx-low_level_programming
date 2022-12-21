#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'print summation of numbers divisible by 3 and 5'
 *
 * Return: Always zero(Success)
 */

int main(void)
{
double x, sum;
sum = 0;

for (x = 0 ; x <= 1024 ; x++)
{
if (((x % 3) == 0) || ((x % 5) == 0))
sum = sum + x;
else
sum = sum + 0;
}
printf("%d\n", sum);
return (0);
}
