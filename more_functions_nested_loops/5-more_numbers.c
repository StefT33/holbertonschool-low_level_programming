#include "main.h"
#include <stdio.h>
/**
* more_numbers - prints 10 times numbers from 0 to 14 followed by a new line
*
* Return: void
*/
void more_numbers(void)
{
int i, n;
for (i = 0 ; i < 10; i++)
{
for (n = 0 ; n <= 14 ; n++)
{
if (n >= 10)
{
_putchar (n / 10 + '0');
}
_putchar (n % 10 + '0');
}
_putchar ('\n');
}
}

