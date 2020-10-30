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
 * add_node - adds a new node at the beginning of a list.
 * @head: double pointer to head of node
 * @str: data to be added to node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nodePtr = NULL;

	nodePtr = malloc(sizeof(list_t));
	if (nodePtr == NULL)
		return (NULL);
	nodePtr->str = strdup(str);
	nodePtr->len = get_string_length(nodePtr->str);
	nodePtr->next = *head;
	*head = nodePtr;
	return (nodePtr);
}
