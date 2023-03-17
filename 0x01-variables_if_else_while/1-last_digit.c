#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int n1 = n % 10;

	if (!n1)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (n1 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n1);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n);
	return (0);
}
