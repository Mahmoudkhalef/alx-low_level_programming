
#include "search_algos.h"

/**
 * recursive_binary - Helper function for advanced_binary function.
 * @array: pointer to the first element of the array to search in.
 * @start: index of the first element of the subarray to search in.
 * @end: index of the last element of the subarray to search in.
 * @value: value to search for.
 * Return: The first index where value is located
*/
int recursive_binary(int *array, int start, int end, int value)
{
	int i = start;

	if (start <= end)
	{
		int mid = start + (end - start) / 2;

		printf("Searching in array: ");
		for (; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);


		if (array[mid] == value)
			return (mid == start || array[mid - 1] != value ? mid :
					recursive_binary(array, start, mid, value));

		if (array[mid] < value)
			return (recursive_binary(array, mid + 1, end, value));

		if (array[mid] > value)
			return (recursive_binary(array, start, mid - 1, value));
	}
	return (-1);
}

/**
* advanced_binary - searches for a value in a sorted array of integers.
* @array: pointer to the first element of the array to search in.
* @size: number of elements in array.
* @value: value to search for.
* Return: The first index where value is located
*			or -1 if value is not present.
*/
int advanced_binary(int *array, size_t size, int value)
{
	return (recursive_binary(array, 0, size - 1, value));
}
