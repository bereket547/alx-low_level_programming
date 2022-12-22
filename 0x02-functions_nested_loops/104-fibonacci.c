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
unsigned long int x, a, sum, new = 1;
sum = 0;
for (x = 0 ; x < 98 ; x++)
{
a = sum + new;
printf("%lu", a);
if (x == 97)
break;
printf(", ");
sum = new;
new = a;
}
printf("\n");
return (0);

}
