#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @head: head of the list
 * @str: data to be added
 * Description: if str is NULL, print [0] (nil)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
