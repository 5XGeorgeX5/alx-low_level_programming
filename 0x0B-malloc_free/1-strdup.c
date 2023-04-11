#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string
 *
 * Return: the copied string
 */

char *_strdup(char *str)
{
int size = 0, i;
char *copy;

if (!str)
return (0);

while (str[size])
size++;

copy = malloc(size + 1);
if (!copy)
return (0);

for (i = 0; i < size + 1; i++)
copy[i] = str[i];

return (copy);
}
