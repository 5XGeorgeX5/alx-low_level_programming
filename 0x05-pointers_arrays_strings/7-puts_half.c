#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: the string.
 *
 */

void puts_half(char *str)
{
int count;
int i;

count = 0;
while (str[count])
{
count++;
}
i = (count + 1) / 2;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
