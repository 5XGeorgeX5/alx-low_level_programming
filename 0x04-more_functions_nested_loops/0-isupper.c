#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if uppercase, 0 if not.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
