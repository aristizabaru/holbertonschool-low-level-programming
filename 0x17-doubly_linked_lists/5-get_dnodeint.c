#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the node, starting from 0
 * Return: on success, the node, on failure returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	if (head->next == NULL && index > 0)
		return (NULL);
	if (index == 0)
		return (head);
	temp = head;
	while (--index != 0 && temp)
		temp = temp->next;
	if (index == 0 && temp)
		return (temp->next);
	return (NULL);
}
