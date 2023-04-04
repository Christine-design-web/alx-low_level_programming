#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The integer value of the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *current_node;
    int n;

    if (head == NULL || *head == NULL)
        return 0;

    current_node = *head;
    n = current_node->n;
    *head = (*head)->next;
    free(current_node);

    return n;
}

