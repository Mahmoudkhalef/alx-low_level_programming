
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: the first index where value is located, or -1 on failure.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, pos;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		pos = start + (((double)(end - start) /
			(array[end] - array[start])) * (value - array[start]));

		if (pos < start || pos > end)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			start = pos + 1;
		else if (array[pos] > value)
			end = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
