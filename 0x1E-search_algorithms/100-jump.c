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
	size_t i, jump = sqrt(size), next = jump;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i += jump, next += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (next >= size || value <= array[next])
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, next);
	for (; i <= next && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
