#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to checked
 *
 * Return: 1 if lower, 0 if not
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
