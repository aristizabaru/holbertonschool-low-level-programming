#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: head of list
 * @index: index to delete
 * Description: index starts at 0
 *
 * Return: 1 on succed, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *aux = NULL;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		aux = temp;
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = temp->next;
	else if (temp->next)
		aux->next = temp->next;
	else
		aux->next = NULL;

	free(temp);
	return (1);
}
