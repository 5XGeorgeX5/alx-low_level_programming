#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: The number
 *
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98\n");
}
