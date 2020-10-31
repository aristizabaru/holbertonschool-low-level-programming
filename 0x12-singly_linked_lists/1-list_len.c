#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: head of the list
 * Description: only works on list_t list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
