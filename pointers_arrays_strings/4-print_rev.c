#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: beginning of string
 * Return: void
 */
void print_rev(char *s)
{
char *ptr = s;
while (*ptr != '\0')
ptr++;
ptr--;
while (ptr >= s)
{ _putchar(*ptr);
ptr--; }
_putchar('\n');
}
