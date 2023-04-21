#include <stdio.h>
#include <stdarg.h>

#define STRING ((str) ? str : "(nil)")

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list args;

if (!n)
{
putchar('\n');
return;
}
if (!separator)
separator = "";
va_start(args, n);
for (i = 1; i < n; i++)
{
str = va_arg(args, char *);
printf("%s%s", STRING, separator);
}
str = va_arg(args, char *);
printf("%s\n", STRING);
va_end(args);
}
