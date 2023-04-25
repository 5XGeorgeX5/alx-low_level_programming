/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the char
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i ; s[i]; i++)
		if (s[i] == c)
			return (&s[i]);
	return (0);
}
