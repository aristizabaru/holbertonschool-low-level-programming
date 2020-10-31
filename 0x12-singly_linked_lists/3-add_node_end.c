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
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to fill member str
 * Description: str needs to be duplicated
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *newNode = NULL;

	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = get_string_length(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
