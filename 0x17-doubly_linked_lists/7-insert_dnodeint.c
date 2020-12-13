#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index where node should be added, starting from 0
 * @n: data to be added to new node
 * Return: on success, the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *new_node = NULL;

	if (idx == 0)
		add_dnodeint(h, n);
	else if (*h && idx > 0)
	{
		temp = *h;
		while (temp && --idx != 0)
			temp = temp->next;

		if (idx == 0 && temp->next != NULL)
		{
			new_node = malloc(sizeof(new_node));
			if (new_node == NULL)
				return (NULL);
			new_node->prev = NULL;
			new_node->n = n;
			new_node->next = NULL;

			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next = new_node;
			new_node->next->prev = new_node;
		}
		else if (idx == 0)
			add_dnodeint_end(h, n);
	}

	return (new_node);
}
