#include "search_algos.h"

/**
 * binary - searches for a value in an array of integers
 * using the Binary search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @left: the start of the array to search
 * @right: the end of the array to search
 * @value:  the value to search for
 * Return: the index of the value
*/
int binary(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left >= right)
		return ((int)right);
	printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	i = (left + right) / 2;
	if (value <= array[i])
		return (binary(array, left, i, value));
	else
		return (binary(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in an array of integers
 * using the Binary search algorithm
 *
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value:  the value to search for
 * Return: the index of the value or -1.
*/
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	if (array == NULL || size == 0)
		return (-1);
	index = binary(array, 0, size - 1, value);
	if (array[index] != value)
	{
		printf("Searching in array: %d\n", array[index]);
		return (-1);
	}
	return (index);
}
