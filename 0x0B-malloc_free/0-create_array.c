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
char *str = malloc(size + 1);
size_t i;

if (!size)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;
str[i] = '\0';
return (str);
}
