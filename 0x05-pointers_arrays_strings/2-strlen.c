/**
 * _strlen - returns the length of a string.
 *
 * @s: the string.
 *
 * Return: the string length.
 */

int _strlen(char *s)
{
int count;

count = 0;
while (*s)
{
s++;
count++;
}
return (count);
}
