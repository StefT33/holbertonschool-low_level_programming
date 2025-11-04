#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: 2D array
 * @size: size of square
 */
void print_diagsums(int *a, int size)
{
int i, j;
int sum_one = 0;
int sum_two = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum_one += *(a + i * size + j);
if (i + j == size - 1)
sum_two += *(a + i * size + j);
}
}
printf("%d, %d\n", sum_one, sum_two);
}
