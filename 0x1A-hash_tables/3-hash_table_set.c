#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash tabl
 * @ht: hash table to add element to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node, *temp;
	char *new_value;

	/* checks */
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	/* get index */
	index = key_index((const unsigned char *)key, ht->size);
	/* look for collisions */
	temp = ht->array[index];
	while (temp != NULL)
	{
		/* if key is found */
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	/* assign to empty slot if no collisions found */
	hash_node = init_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}

/**
 * init_hash_node - creates a new hash node
 * @key: key of the node
 * @value: value of the node
 *
 * Return: new node on succes, NULL on failure
 */
hash_node_t *init_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	/* duplicate key & value so it can be stored */
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}