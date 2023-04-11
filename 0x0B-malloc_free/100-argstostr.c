#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: the number of arguments
 * @av: an array of the arguments
 *
 * Return: the new string.
 */

char *argstostr(int ac, char **av)
{
char *str;
int len = 0, len2 = 0, i, j;

if (!ac || !av)
return (0);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

str = malloc(len + ac + 1);
if (!str)
return (0);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[len2] = av[i][j];
len2++;
}
str[len2] = '\n';
len2++;
}
str[len2] = '\0';
return (str);
}
