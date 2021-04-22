#include "search_algos.h"

/**
 * jump_list - find value in linked list
 * @list: head of linked list
 * @size: size of the linked list
 * @value: value to be found
 *
 * Return: index of value on success, -1 on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *left = list;
	listint_t *right = list;
	int i = 0;

	if (!list || !size)
		return (NULL);

	while (right->next && right->index < size && right->n < value)
	{
		left = right;
		for (i = 0; i < sqrt(size); i++)
		{
			if (!right->next)
				break;
			right = right->next;
		}
		printf("Value checked at index[%d] = [%d]\n", (int)right->index, right->n);
	}
	printf("Value found between indexes [%d] = [%d]\n",
	       (int)left->index, (int)right->index);
	for (i = (int)left->index; i <= (int)right->index; i++)
	{
		printf("Value checked at index [%d] = [%d]\n", i, left->n);
		if (left->next)
			left = left->next;
		/* linear search when correct block found */
		if (left->n == value)
		{
			printf("Value checked at index [%d] = [%d]\n", i + 1, left->n);
			return (left);
		}
	}
	return (NULL);
}
