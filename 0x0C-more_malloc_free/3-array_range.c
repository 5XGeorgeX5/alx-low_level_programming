/**
 * array_range - creates an array of integers.
 *
 * @min: the first element
 * @max: the last element
 *
 * Return: the array
 */

int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (0);
arr = malloc((max - min + 1) * 4);
if (!arr)
return (0);
for (i = min; i <= max; i++)
arr[i - min] = i;
return (arr);
}
