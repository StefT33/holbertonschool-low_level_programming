#include <unistd.h>
#include "main.h"
/**
* print_alphabet - prints alphabet followed by a new line
*
* Description: _putchar is used to print alphabet
* Return: void
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
