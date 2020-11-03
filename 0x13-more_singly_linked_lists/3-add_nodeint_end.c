#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to head of list
 * @n: data to be added
 *
 * Return:  address of the new element
 * NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = NULL;
	listint_t *temp = NULL;

	newNode = malloc(sizeof(*newNode));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = newNode;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
