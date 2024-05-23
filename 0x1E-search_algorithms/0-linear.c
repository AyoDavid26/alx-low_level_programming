#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * Linear_Search - To search for a value in an array using
 * linear search algorithm
 *
 * @array: A pointer to the first element of the arrayto search
 * @size: Number of elements in the array
 * @value: Value to search
 *
 * Return: the first index where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
