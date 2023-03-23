#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \
 *
 */

void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (int j = n - i; j < n; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
