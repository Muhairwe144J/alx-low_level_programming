#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in the list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *prev;
unsigned int count = 0;

if (head == NULL || *head == NULL)
return (-1);

temp = *head;
prev = NULL;

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (temp != NULL && count < index)
{
prev = temp;
temp = temp->next;
count++;
}

if (temp == NULL)
return (-1);

prev->next = temp->next;
free(temp);
return (1);
}
