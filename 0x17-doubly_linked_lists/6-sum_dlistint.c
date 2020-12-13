#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: sum of all the data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    if (head)
    {
        while (head)
        {
            sum += head->n;
            head = head->next;
        }
    }
    return (sum);
}