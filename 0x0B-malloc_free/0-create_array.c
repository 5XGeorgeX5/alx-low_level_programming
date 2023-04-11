#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the number of characters
 * @c: the initializing character
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *str = malloc(size);

if (!size || !str)
return (0);

while (size--)
str[size] = c;
return (str);
}
