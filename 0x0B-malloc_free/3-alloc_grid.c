#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
int **arr, i, j;

if (width < 1 || height < 1)
return (0);

arr = malloc(8 * height);
if (!arr)
return (0);

for (i = 0; i < height; i++)
{
arr[i] = malloc(4 * width);
if (!arr[i])
{
while (i--)
free(arr[i]);
free(arr);
return (0);
}
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);
}
