/**
 * _strcpy - prints n elements of an array of integers
 *
 * @dest: the new string
 * @src: the string that will be copied
 *
 * Return: pointer to the new string
 */

char *_strcpy(char *dest, char *src)
{
char *p;
p = dest;

while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (p);
}
