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
	const listint_t *hare = NULL;
	const listint_t *tortoise = NULL;
	size_t count = 0;

	if (head == NULL)
		exit(98);
	tortoise = head->next;
	hare = head->next->next;
	while (hare && hare->next)
	{
		/*check if they meet*/
		if (hare == tortoise)
		{
			/*tortoise to node 1*/
			tortoise = head;
			printf("[%p} %d\n", (void *)tortoise, tortoise->n);
			count++;
			/*loop til they find*/
			while (tortoise->next != hare->next)
			{
				tortoise = tortoise->next;
				hare = hare->next;
				printf("[%p} %d\n", (void *)tortoise, tortoise->n);
				count++;
			}

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				printf("[%p} %d\n", (void *)tortoise, tortoise->n);
				count++;
			}
			break;
		}
		tortoise = tortoise->next;
		hare = hare->next->next;
	}
	if (count == 0)
		count = print_listint(head);
	return (count);
}

/**
 * print_listint_dir - print all elements of a listint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */
size_t print_listint_dir(const listint_t *h)
{
	size_t count = 0;

	/*check if h is null*/
	if (h == NULL)
		return (count);

	while (h)
	{
		printf("[%p} %d\n", (void *)h, h->n);
		h = h->next;
		count++;
	}
	return (count);
}
