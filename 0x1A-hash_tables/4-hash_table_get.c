#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 *
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
        unsigned long int index;
        hash_node_t *temp;

        /* checks */
        if (ht == NULL || ht->array == NULL || ht->size == 0 ||
            key == NULL || strlen(key) == 0)
                return (NULL);
        /* get slot's index */
        index = key_index((const unsigned char *)key, ht->size);
        /* check if there's match with keys - look in chain */
        temp = ht->array[index];
        while (temp != NULL)
        {
                if (strcmp(temp->key, key) == 0)
                        return (temp->value);
                temp = temp->next;
        }
        return (NULL);
}