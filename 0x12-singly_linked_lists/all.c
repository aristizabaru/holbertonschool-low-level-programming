#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

unsigned int get_string_length(char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);

/**
 * add_node_end - adds a new node at the end
 * @head: head of the list
 * @str: data to be added
 *
 * Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = NULL;
	list_t *newNode = NULL;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = get_string_length(newNode->str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (*head);
}

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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/*---- TAKE TO HELPER_FUNCTIONS.c*/
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
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Bob");
	add_node_end(&head, "&");
	add_node_end(&head, "Kris");
	add_node_end(&head, "love");
	add_node_end(&head, "asm");
	print_list(head);
	free_list(head);
	head = NULL;
	return (0);
}
