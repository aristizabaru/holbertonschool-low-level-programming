#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: index where new node will be added
 * @n: data to be stored in the node
 * Description: index starts at 0
 *
 * Return: address of the new node, or NULL if it failed
 * if index is not valid return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL;
	listint_t *new_node = NULL;
	unsigned int count = 1;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL && idx == 0)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (idx != count)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		count++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
