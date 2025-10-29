#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: beginning of string
 */
void puts_half(char *str)
{
char *ptr = str;
int len = 0;
char *start;

while (*ptr != '\0')
{ len++;
ptr++; }

if (len % 2 == 0)
start = str + (len / 2);
else
start = str + ((len + 1) / 2);

while (*start != '\0')
{_putchar(*start);
start++; }
_putchar('\n');
}
