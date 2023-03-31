/**
 * _strncpy - cpy string
 *
 * @dest: the first string
 * @src: the second string
 * @n: the length of src
 *
 * Return: pointer to the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}
