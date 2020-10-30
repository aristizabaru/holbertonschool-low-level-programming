#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the list
 *
 * Return: list
 */
void free_list(list_t *head)
{
	list_t *temp1 = NULL;
	list_t *temp2 = NULL;

	temp1 = head;
	temp2 = temp1->next;
	while (temp1->next)
	{
		free(temp1->str);
		free(temp1);
		temp1 = temp2;
		temp2 = temp1->next;
	}
	free(temp1->str);
	free(temp1);
}
