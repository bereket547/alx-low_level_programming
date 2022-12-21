#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @n: input number
 * Description: 'print summation of numbers divisible by 3'
 *
 * Return: Always zero(Success)
 */

int main(void)
{
int x;
int sum = 0;

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
