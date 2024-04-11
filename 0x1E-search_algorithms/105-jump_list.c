
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 *			using the Jump search algorithm.
 * @list: pointer to the head of the list to search in.
 * @size: number of currents in list.
 * @value: value to search for.
 * Return: a pointer to the first node where value is located,
 *		or NULL if value is not present in list or if list is NULL.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump = sqrt((double)size), i = 0, x = 0;
	listint_t *current = list, *temp = list;

	if (list == NULL || size == 0)
		return (NULL);

	while (x < size && temp->n < value && temp->next)
	{
		i = x;
		x = temp->next && x + jump < size ? x + jump : size - 1;

		while (temp->next && temp->index < x)
			temp = temp->next;

		printf("Value checked at index[%lu] = [%d]\n", x, temp->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", i, x);

	while (current->index < i)
		current = current->next;

	for (; current && current->index <= x; (current = current->next), i++)
	{
		printf("Value checked at index[%lu] = [%d]\n",
				current->index, current->n);

		if (current->n == value)
			return (current);
	}
	return (NULL);
}
