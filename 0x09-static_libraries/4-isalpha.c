#include "main.h"

/**
 * _isalpha - Entry point
 * @c: The character to checked
 *
 * Return: 1 if alpha, 0 if not
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
