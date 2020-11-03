#include "lists.h"

/**
 * listint_len - return number of elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/*check if h is null*/
	if (h == NULL)
		return (count);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
