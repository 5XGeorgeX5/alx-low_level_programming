#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 *
 */

void more_numbers(void);
{
int i;
int k;
for (i = '0'; i < '2'; i++)
{
for (k = '0'; k <= '9'; k++)
{
if (i == '1')
{
if (k == '5')
break;
_putchar(i);
}
_putchar(k);
}
_putchar('\n');
}
}
