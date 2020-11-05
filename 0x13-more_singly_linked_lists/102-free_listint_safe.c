#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @h: pointer to head of list
 * Description: sets the head to NULL
 *
 * Return:  size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *hare = NULL, *tortoise = NULL, *temp = NULL;
	size_t count = 1;

	if ((*h)->next == NULL)
	{
		free(*h);
		return (count);
	}
	tortoise = (*h)->next;
	hare = (*h)->next->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = *h;
			while (tortoise != hare)
			{
				count++;
				temp = tortoise;
				tortoise = tortoise->next;
				free(temp);
				hare = hare->next;
			}
			temp = tortoise;
			tortoise = tortoise->next;
			free(temp);
			while (tortoise != hare)
			{
				count++;
				temp = tortoise;
				tortoise = tortoise->next;
				free(temp);
			}
			free(tortoise);
			return (count);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (count);
}
