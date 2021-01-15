#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
        unsigned long int i;
        hash_node_t *temp;

        /* checks */
        if (ht == NULL || ht->array == NULL || ht->size == 0)
                return;
        /* go through array */
        for (i = 0; i < ht->size; i++)
        {
                while (ht->array[i] != NULL)
                {
                        /* free nodes */
                        temp = ht->array[i]->next;
                        free(ht->array[i]->key);
                        free(ht->array[i]->value);
                        free(ht->array[i]);
                        ht->array[i] = temp;
                }
        }
        /* free array and ht node */
        free(ht->array);
        ht->array = NULL;
        ht->size = 0;
        free(ht);
}