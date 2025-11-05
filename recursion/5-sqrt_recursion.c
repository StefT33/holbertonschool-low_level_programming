#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 or int
 */
int _sqrt_recursion(int n)
{
  int i;
  if (i * i < 0)
    return (-1);
  else if (i * i == 0)
    return (0);
  else if (i * i == 1)
    return (1);
  else
    return (_sqrt_recursion(i + 1));
}
