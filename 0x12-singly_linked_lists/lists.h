#ifndef __LISTS_H__
#define __LISTS_H__
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};
typedef struct list_s list_t;
/*functions*/
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
unsigned int get_string_length(char *str);
#endif
