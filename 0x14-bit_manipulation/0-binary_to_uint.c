#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0, pow = 1;
	int i;

	if (!b)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		ans += (b[i] - '0') * pow;
		pow <<= 1;
	}
	return (ans);
}
