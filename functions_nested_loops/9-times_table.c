#include <stdlib.h>
#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
* Return: void
*/
void times_table(void)
{
int a, b;
int multi;
for (a = 0 ; a <= 9 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
multi = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
if (multi < 10)
_putchar(' ');
}
if (multi < 10)
{
_putchar(multi + '0');
}
else
{
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
}	
_putchar('\n');
}
}
