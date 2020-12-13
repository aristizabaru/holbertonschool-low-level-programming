#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index in a dlistint_t list
 * @head: head of the list
 * @index: index where node should be deleted, starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;

	if (*head)
	{
		if ((*head)->next == NULL && index == 0)
		{
			free(*head);
			*head = NULL;
			return (DELETE_SUCCES);
		}
		else if ((*head)->next && index == 0)
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
			return (DELETE_SUCCES);
		}
		else
		{
			temp = *head;
			while (--index != 0 && temp->next)
				temp = temp->next;
			if (index == 0 && temp->next)
			{
				temp->next = temp->next->next;
				free(temp->next->prev);
				temp->next->prev = temp;
				return (DELETE_SUCCES);
			}
			else if (index == 0 && temp->next == NULL)
			{
				free(temp->next);
				temp->next = NULL;
				return (DELETE_SUCCES);
			}
		}
	}

	return (DELETE_FAILURE);
}
