/**
 * _strcmp - compare 2 strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: comparison result
 */

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i]; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (s1[i] - s2[i]);
}
