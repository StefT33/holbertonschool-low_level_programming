#include <stdio.h>
/**
* main - s'affiche en sortie
* Return: 0
*/
int main(void)
{
int digit;
for (digit = 1 ; digit <= 9 ; digit++)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
