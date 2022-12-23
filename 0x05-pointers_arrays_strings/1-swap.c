#include"main.h"

/**
 * swap_int - pointer to change values
 * @a: first number
 * @b: second number
 * Description: print a number
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
