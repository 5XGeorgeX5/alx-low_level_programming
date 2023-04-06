/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: the string
 *
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
int len;

len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
