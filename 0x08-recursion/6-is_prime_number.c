#include "main.h"

/**
 * is_prime_number - checks if a number is prime or not
 *
 * @n: the number
 *
 * Return: 1 if prime, 0 if not;
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (prime(n, 2));
}

/**
 * prime - checks if a number is prime or not
 *
 * @n: the number
 * @x: the divisor
 *
 * Return: 1 if prime, 0 if not;
 */

int prime(int n, int x)
{
if (n % x)
{
if (x * 2 < n)
return (prime(n, x + 1));
return (1);
}
return (0);
}
