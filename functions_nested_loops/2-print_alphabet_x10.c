#include <unistd.h>
#include "main.h"
/**
* print_alphabet_x10 - prints alphabet x10 followed by a new line
* Description: _putchar is used to print alphabet
* Return: (void)
*/
void print_alphabet_x10(void)
{
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
int i, j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; alpha[j] != '\0' ; j++)
_putchar(alpha[j]);
_putchar('\n');
}
}
