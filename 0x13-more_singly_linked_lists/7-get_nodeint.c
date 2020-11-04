#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to head of list
 * @index: index of the node, starting at 0
 * Description: if the node does not exist, return NULL
 *
 * Return: index node’s data (n)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;

	temp = head;
	while (index != 0)
	{
		if (temp->next == NULL)
		{
			temp = NULL;
			break;
		}
		temp = temp->next;
		index--;
	}
	return (temp);
}
