#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of list
 *
 * Return:  nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
