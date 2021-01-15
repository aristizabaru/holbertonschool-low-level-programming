#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
        hash_node_t *temp;
        unsigned long int i;
        char flag = 0;

        /* checks */
        if (ht == NULL || ht->array == NULL)
                return;
        printf("{");
        for (i = 0; i < ht->size; i++)
        {
                temp = ht->array[i];
                while (temp != NULL)
                {
                        /* check if a node has been printed */
                        if (flag == 1)
                                printf(", ");
                        printf("'%s': '%s'", temp->key, temp->value);
                        flag = 1;
                        temp = temp->next;
                }
        }
        printf("}\n");
}
