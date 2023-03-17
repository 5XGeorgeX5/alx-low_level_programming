#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar (i);
if (i == 57)
{
putchar ('\n');
break;
}
putchar (44);
putchar (32);
}
return (0);
}
