#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using the jump search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (value <= array[i])
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
	for (j = i - jump; j <= i && j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
