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

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = get_string_length(temp->str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
