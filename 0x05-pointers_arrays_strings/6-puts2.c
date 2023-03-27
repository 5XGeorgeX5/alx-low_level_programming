#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 *
 * @str: the string.
 *
 */

void puts2(char *str)
{
int count;
int i;
int tmp;

count = 0;
while (*str)
{
str++;
count++;
}
str -= count;
for (i = 0; i < count; i += 2)
{
_putchar(*(str + i));
}
_putchar('\n');
}
