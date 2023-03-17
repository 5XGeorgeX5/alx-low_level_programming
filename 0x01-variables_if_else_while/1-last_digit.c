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
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n1 = n % n;
	if (!n1)
		printf("Last digit of %i is 0 and is 0\n", n);
	else if (n1 < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n1);
	else
		printf("Last digit of %i is %i and is greater than 5\n", n, n1);
	return (0);
}
