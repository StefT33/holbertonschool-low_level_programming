#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: pointer
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp = 0;
tmp = *b;
*b = *a;
*a = tmp;
}
