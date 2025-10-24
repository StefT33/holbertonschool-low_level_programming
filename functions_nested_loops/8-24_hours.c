#include <stdlib.h>
#include "main.h"
/**
* jack_bauer - prints minutes of the day, starting from 00:00 to 23:59.
* um: unite minutes to be printed
* dm: dizaine minutes to be printed
* uh: unite hours to be printed
* dh: dizaine hours to be printed
* Return: void
*/
void jack_bauer(void)
{
int h, m;
for (h = 0 ; h <= 23 ; h++)
{
for (m = 0 ; m <= 59 ; m++)
{
int dh = h / 10, uh = h % 10;
int dm = m / 10, um = m % 10;
_putchar (dh + '0');
_putchar (uh + '0');
_putchar (':');
_putchar (dm + '0');
_putchar (um + '0');
_putchar ('\n');
}
}
}
