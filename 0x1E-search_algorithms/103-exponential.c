#include "search_algos.h"
#include <math.h>

/**
 * bi_search - searches for a value in an array of integers
 * using the Binary search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int bi_search(int *array, size_t size, int value)
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

/**
 * exponential_search - searches for a value in an array of integers
 * using the exponential search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	int index;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 1; i < size; i *= 2)
	{
		if (value <= array[i])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
			i /= 2;
			index = bi_search(&array[i], i + 1, value);
			return ((index == -1) ? -1 : (int)i + index);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	i /= 2;
	printf("Value found between indexes [%ld] and [%ld]\n", i, size - 1);
	index = bi_search(&array[i], size - i, value);
	return ((index == -1) ? -1 : (int)i + index);
}
