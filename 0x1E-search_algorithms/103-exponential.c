
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of
 *				integers using the exponential search algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 *			else the first index where the value is located.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, mid, i, bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	/* Find the range for the binary search. */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	/* Calculate the start and end of the subarray. */
	start = bound / 2;
	end = bound < size - 1 ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	/* Perform the binary search. */
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;

	}
	return (-1);
}
