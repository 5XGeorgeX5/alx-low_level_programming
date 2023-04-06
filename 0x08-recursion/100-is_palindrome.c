#include "main.h"

/**
 * is_palindrome - checks if a string is palaindrome or not
 *
 * @s: the string
 *
 * Return: 1 if palaindrome, 0 if not;
 */

int is_palindrome(char *s)
{
int len;

len = _strlen_recursion(s) - 1;

return (palindrome(s, len, 0));
}

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

/**
 * palindrome - checks if a string is palaindrome or not
 *
 * @s: the string
 * @len: the the length of the string
 * @i: the index
 *
 * Return: the length of a string.
 */

int palindrome(char *s, int len, int i)
{
if (s[i] == s[len - i])
{
if (i == len / 2)
return (1);
return (palindrome(s, len, i + 1));
}
return (0);
}
