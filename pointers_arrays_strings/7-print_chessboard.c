#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints the chessboard.
 * @a: board
 */
void print_chessboard(char (*a)[8])
{
char (*row)[8] = a;
char *col;
for (; row < a + 8; row++)
{
col = *row;
for (; col < *row + 8; col++)
_putchar(*col);
_putchar('\n');
}
}
