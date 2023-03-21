#include "main.h"

/**
 * print_sign - Entry point
 * @n: The character to checked
 *
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (!n)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
