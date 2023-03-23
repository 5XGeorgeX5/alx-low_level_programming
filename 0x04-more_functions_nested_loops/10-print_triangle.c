#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 *
 */

void print_triangle(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 1; j < size - i; j++)
_putchar(' ');
for (j = size - i ; j <= size; j++)
_putchar('#');
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
