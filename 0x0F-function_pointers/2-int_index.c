/**
 * int_index - searches for an integer
 * @array: The array
 * @size: The size
 * @cmp: The fuction
 *
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (!array || !cmp || size < 1)
return (-1);

for (i = 0; i < size; i++)
if(!cmp(array[i]))
return (i);

return (-1);
}
