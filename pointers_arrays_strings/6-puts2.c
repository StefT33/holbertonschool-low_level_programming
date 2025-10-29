#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: characters to print
 */
void puts2(char *str)
{
char *ptr = str;
while (*ptr != '\0' && *(ptr + 1) != '\0')
{
_putchar(*ptr);
ptr = ptr + 2; }
_putchar('\n');
}
