#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: The number
 *
 */

void print_to_98(int n)
{
int a;
int b;

while (n < 98)
{
if (n < -9)
{
a = n / -10;
b = (-1 * n) % 10;
_putchar('-');
_putchar(a + '0');
_putchar(b + '0');
}
else if (n < 0)
{
a = n * -1;
_putchar('-');
_putchar(a + '0');
}
else if (n < 10)
_putchar(n + '0');
else
{
a = n / 10;
b = n % 10;
_putchar(a + '0');
_putchar(b + '0');
}
_putchar(',');
_putchar(' ');
n++;
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
