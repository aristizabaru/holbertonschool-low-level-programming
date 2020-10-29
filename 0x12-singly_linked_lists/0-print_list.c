#include "limits.h"

/**
 * print_list - prints all the elements of a list.
 * @h: pointer to head of node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 1;

	list_t *ptr = NULL;

	ptr = h->next;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("%i %s\n", h->len, h->str);
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%i %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
