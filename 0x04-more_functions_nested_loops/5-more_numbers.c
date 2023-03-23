#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
 */

void more_numbers(void)
{
int i;
int j;
int k;

for (k = 0; k < 10; k++)
{
for (i = '0'; i < '2'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if (i == '1')
{
if (j == '5')
break;
_putchar(i);
}
_putchar(j);
}
}
_putchar('\n');
}
}
