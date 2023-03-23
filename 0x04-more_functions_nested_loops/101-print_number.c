#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the number to be printed
 *
 */

void print_number(int n)
{

int a[15];
int i;

if (!n)
{
_putchar('0');
return;
}

if (n < 0)
{
n *= -1;
_putchar('-');
}
i = 0;
while (n)
{
a[i] = n % 10;
n /= 10;
i++;
}
i--;
for (; i >= 0; i--)
{
_putchar('0' + a[i]);
}
}
