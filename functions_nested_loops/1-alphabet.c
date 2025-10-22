#include <unistd.h>
#include "main.h"
/**
* void print_alphabet: print alphabet, followed by a new line
*
* Return: 0;
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
