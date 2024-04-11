
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers.
 *			using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the first index where value is located,
 *		or -1 if value is not present in array or if array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
