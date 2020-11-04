#include "lists.h"

/**
 *  pop_listint - eletes the head node
 * @head: pointer to head of list
 * Description: if the linked list is empty return 0
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int data = 0;

	if (*head == NULL)
		return (0);
	temp = (**head).next;
	data = (**head).n;
	free(*head);
	*head = temp;
	return (data);
}
