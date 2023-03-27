#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: the string.
 *
 */

void print_rev(char *s)
{
int count;
int i;

count = 0;
while (*s)
{
s++;
count++;
}
s -= count;
count--;
for (i = count; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
