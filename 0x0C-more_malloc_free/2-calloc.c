#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: the number of elements
 * @size: the size of each element
 *
 * Return: the pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
unsigned int i;

if (!nmemb || !size)
return (0);
s = malloc(nmemb * size);
if (!s)
return (0);
for (i = 0; i < nmemb * size; i++)
s[i] = 0;
return (s);
}
