#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of list
 * Description: sets the head to NULL
 *
 * Return:  nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (**head).next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
