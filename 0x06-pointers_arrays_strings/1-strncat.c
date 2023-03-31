/**
 * _strncat - appends the src string to the dest string
 *
 * @dest: the first string
 * @src: the second string
 *
 * Return: pointer to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len;
int src_len;
int i;

dest_len = 0;
src_len = 0;
while (dest[dest_len])
dest_len++;
while (src[src_len] && src_len < n)
src_len++;
for (i = 0 ; i < src_len; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
