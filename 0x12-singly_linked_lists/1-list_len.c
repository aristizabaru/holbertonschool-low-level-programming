#include "lists.h"

/**
 * list_len - get number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 1;
	list_t *nodePtr = NULL;

	nodePtr = h->next;
	while (nodePtr)
	{
		nodePtr = nodePtr->next;
		count++;
	}

	return (count);
}
