#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the new string
 */

char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i;
char *s3;

if (!s1 && !s2)
return (0);

while (s1[len1])
len1++;

while (s2[len2])
len2++;

s3 = malloc(len1 + len2 + 1);
if (!s3)
return (0);

for (i = 0; i < len1; i++)
s3[i] = s1[i];
for (i = 0; i < len2; i++)
s3[i + len1] = s2[i];

s3[len1 + len2] = '\0';

return (s3);
}
