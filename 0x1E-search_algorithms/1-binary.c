#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Binary search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = (left + right) / 2;
		if (value < array[i])
			right = i - 1;
		else if (value > array[i])
			left = i + 1;
		else
			return (i);
	}
	return (-1);
}
