#include "lists.h"

/**
 * free_listint_safe_loop - Frees a list with a loop.
 * @head: Pointer to the pointer of the head node.
 * @loop_node: Pointer to the node where the loop starts.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe_loop(listint_t **head, listint_t *loop_node)
{
	size_t count = 1;
	listint_t *temp = loop_node;

	while (temp->next != loop_node)
	{
		temp = temp->next;
		count++;
	}

	temp->next = NULL;
	free_listint2(head);
	return (count);
}

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: Pointer to the pointer of the head node.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return (free_listint_safe_loop(head, slow));
	}

	free_listint2(head);
	return (0);
}
