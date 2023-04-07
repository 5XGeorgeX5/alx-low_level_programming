#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the number of inputs
 * @argv: the array of inputs
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int a;
int sum;

if (argc != 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
sum = a / 25;
a %= 25;
sum += a / 10;
a %= 10;
sum += a / 5;
a %= 5;
sum += a / 2;
sum += a & 1;
printf("%d\n", sum);
return (0);
}
