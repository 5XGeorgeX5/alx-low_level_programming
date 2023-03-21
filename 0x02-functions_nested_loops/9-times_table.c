#include "main.h"

/**
 * times_table - Entry point
 *
 */

void times_table(void)
{
int i;
int j;
int x;
int y;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 9; j++)
{
x = i * j;
if (x > 9)
{
y = x / 10;
x %= 10;
_putchar(y + '0');
}
else
_putchar(' ');
_putchar(x + '0');
_putchar(',');
_putchar(' ');
}
x = i * j;
if (x > 9)
{
y = x / 10;
x %= 10;
_putchar(y + '0');
}
else
_putchar(' ');
_putchar(x + '0');
_putchar('\n');
}
}
