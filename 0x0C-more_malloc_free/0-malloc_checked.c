#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size
 *
 * Return: the pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *s = malloc(b);

if (!s)
exit(98);
return (s);
}
