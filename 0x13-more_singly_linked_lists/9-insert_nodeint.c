#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index of the new node to be inserted (starting from 0).
 * @n: Value to be added in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *temp;
unsigned int count = 0;

if (head == NULL)
return (NULL);

if (idx == 0)
return (add_nodeint(head, n));

temp = *head;
while (temp != NULL && count < idx - 1)
{
temp = temp->next;
count++;
}

if (temp == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = temp->next;
temp->next = new_node;

return (new_node);
}
