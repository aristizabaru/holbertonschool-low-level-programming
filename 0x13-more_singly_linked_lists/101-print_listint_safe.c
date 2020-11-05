#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head of list
 *
 * Return: number of nodes in the list
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;

	if (head == NULL)
		exit(98);

	count = get_safe_list_length(head);
	if (count == 0) /*case if list has no loop*/
	{
		if (head->next == NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			return (count);
		}
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else /*case if list has lopp*/
	{
		while (i < count)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			i++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}

/**
 * get_safe_list_length - get lenth of list with loop
 * @head: head of list
 *
 * Return: number of nodes in the list
 * If there's no loop return 0
 */
size_t get_safe_list_length(const listint_t *head)
{
	const listint_t *hare = NULL;
	const listint_t *tortoise = NULL;
	size_t count = 1;

	if (head->next == NULL)
		return (count);
	tortoise = head->next;
	hare = head->next->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				count++;
				tortoise = tortoise->next;
			}
			return (count);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}
