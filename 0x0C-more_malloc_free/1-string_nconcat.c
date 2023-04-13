#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the size
 *
 * Return: the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i;
int len1 = strlen(s1);
int len2;
char *s3;

if (strlen(s2) < n)
len2 = strlen(s2);
else
len2 = n;
s3 = malloc(len1 + len2 + 1);
if (!s3)
return (0);
for (i = 0; i < len1; i++)
s3[i] = s1[i];
for (i = 0; i < len2 && i < (int) n; i++)
s3[i + len1] = s2[i];
s3[len1 + len2] = '\0';
return (s3);
}
