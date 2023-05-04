#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: the converted number
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = n;

	m >>= 1;
	if (m)
		print_binary(m);
	_putchar('0' + (n & 1));
}
