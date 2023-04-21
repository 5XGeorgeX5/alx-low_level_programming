#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of parameters
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

if (separator)
{
va_start(args, n);
for (i = 1; i < n; i++)
printf("%d%s", va_arg(args, int), separator);
printf("%d\n", va_arg(args, int));
va_end(args);
}
}
