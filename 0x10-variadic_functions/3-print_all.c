#include <stdio.h>
#include <stdarg.h>

#define STRING ((str) ? str : "(nil)")

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str, *comma = "";
va_list args;

if (!format)
{
putchar('\n');
return;
}
va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", comma, va_arg(args, int));
break;
case 'i':
printf("%s%i", comma, va_arg(args, int));
break;
case 'f':
printf("%s%f", comma, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
printf("%s%s", comma, STRING);
break;
}
comma = ", ";
i++;
}
putchar('\n');
va_end(args);
}
