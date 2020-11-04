#include "lists.h"

/**
 * add_nodeint - dds a new node at the beginning
 * @head: pointer to head of list
 * @n: data to be added
 *
 * Return:  address of the new element
 * NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(*temp));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
