#include "main.h"

/**
 * jack_bauer - Entry point
 *
 */

void jack_bauer(void)
{
int i;
int j;
int k;
int x;

for (i = '0'; i < '2'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k < '6'; k++)
{
for (x = '0'; x <= '9'; x++)
{
_putchar(i);
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(x);
_putchar('\n');
}
}
}
}
for (j = '0'; j <= '4'; j++)
{
for (k = '0'; k < '6'; k++)
{
for (x = '0'; x <= '9'; x++)
{
_putchar('2');
_putchar(j);
_putchar(':');
_putchar(k);
_putchar(x);
_putchar('\n');
}
}
}
}
