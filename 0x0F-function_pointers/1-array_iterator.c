/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: The array
 * @size: The size
 * @action: The fuction
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
for (i = 0; i < size; i++)
action(array[i]);
}
