/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: the number
 * @m: the other number
 *
 * Return: the number of bits you need
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;
	while (n)
	{
		m++;
		n = n & (n - 1);
	}
	return (m);
}
