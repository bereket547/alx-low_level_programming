#include<stdio.h>
#include"main.h"

/**
 * main - 1-100 but fizz for 3 and buzz for 5 and fizzbuzz for 3and5
 *
 * Description: print 1-100
 *
 * Return: no return
 */

void main(void)
{
int a, b;

for (a = 1 ; a <= 100 ; a++)
{
if (((a % 3) == 0) && ((a % 5) == 0))
printf("FizzBuzz");
else if (((a % 3) == 0) && ((a % 5) != 0))
printf("Fizz");
else if (((a % 5) == 0) && ((a % 3) != 0))
printf("Buzz");
else
printf("%d", a);
printf(" ");
}
_putchar('\n');
}
