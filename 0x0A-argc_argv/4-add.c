#include <stdio.h>
#include <string.h>
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
int a, b, sum;

for (a = 1; a < argc; a++)
{
for (b = 0; b < (int)strlen(argv[a]); b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n");
return (1);
}
}
}
sum = 0;
for (a = 1; a < argc; a++)
{
b = atoi(argv[a]);
sum += b;
}
printf("%d\n", sum);
return (0);
}
