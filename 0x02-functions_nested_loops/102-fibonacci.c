#include<stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'print summation of Fibonacci numbers'
 *
 * Return: Always zero(Success)
 */

int main(void)
{
int x, sum;
sum = 0;

for (x = 1 ; x <= 50 ; x++)
{
sum = sum + x;
printf("%d", sum);
if (x == 50)
break;
printf(", ");
}
printf("\n");
return (0);

}
