/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (root(n, 0));
}

/**
 * root - finds the root of a number.
 *
 * @n: the number
 * @x: the root
 *
 * Return: the root.
 */

int root(int n, int x)
{
if (x * x < n)
return (root(n, x + 1));
if (x * x == n)
return (x);
return (-1);
}
