#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *current_node;

    current_node = head;

    for (i = 0; i < index && current_node != NULL; i++)
        current_node = current_node->next;

    if (i == index && current_node != NULL)
        return current_node;

    return NULL;
}

