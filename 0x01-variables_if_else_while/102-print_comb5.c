#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
int k;
int x;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = i; k < 58; k++)
{
for (x = 48; x < 58; x++)
{
if (x <= j && k == i)
continue;
putchar (i);
putchar (j);
putchar (' ');
putchar (k);
putchar (x);
if (i == '9' && j == '8' && k == '9' && x == '9')
{
putchar ('\n');
break;
}
putchar (',');
putchar (' ');
}
}
}
}
return (0);
}
