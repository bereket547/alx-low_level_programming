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
  int x, a, sum, new = 1;
sum = 0;
for (x = 0 ; x < 50 ; x++)
{
a = sum + new;
printf("%d", a);
if (x == 50)
break;
printf(", ");
sum = new;
new = a;
}
printf("\n");
return (0);

}
