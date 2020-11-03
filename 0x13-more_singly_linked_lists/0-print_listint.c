#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	/*check if h is null*/
	if (h == NULL)
		return (count);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
