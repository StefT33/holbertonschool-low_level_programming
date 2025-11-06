#include "main.h"
/**
 * is_prime_helper - returns 1 if n is primer or 0 if none
 * @n: integer to test
 * @i: divisor being tested
 * Return: 1 or 0
 */
int is_prime_helper(int n, int i)
{
if (n % i == 0)
return (0);
else if (i * i > n)
return (1);
else
return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer to check
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_helper(n, 2));
}
