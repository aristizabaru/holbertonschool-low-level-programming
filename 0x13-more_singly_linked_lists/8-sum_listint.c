#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * @head: head of list
 *
 * Return: sum of data
 * if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int count = 0;

	if (head == NULL)
		return (count);
	temp = head;
	while (temp)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
