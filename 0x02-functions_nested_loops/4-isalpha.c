#include<ctype.h>
#include "main.h"

/**
 * _isalpha - Entry point
 * @c: single letter input
 * Description: 'print 1 if it is letter else 0'
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if(isalpha(c) == 1)
return (1);
else
return (0);
_putchar('\n');

}
