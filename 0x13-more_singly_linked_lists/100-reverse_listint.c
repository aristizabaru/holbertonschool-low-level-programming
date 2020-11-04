#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of list
 *
 * Return: first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *temp2 = NULL;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
