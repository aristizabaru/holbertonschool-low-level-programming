#include "lists.h"

/**
 * get_string_length - return string length
 * @str: string
 *
 * Return: length of string whitout null
 */
unsigned int get_string_length(char *str)
{
	unsigned int length = 0;

	while (*(str + length))
		length++;
	return (length);
}
/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
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
		count++;
	}
	return (count);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: string to fill member str
 * Description: str needs to be duplicated
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = get_string_length(temp->str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
