#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a listint_t linked list.
 * @head: Pointer to the head node of the linked list.
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			listint_t *loop_start = head;

			while (loop_start != slow)
			{
				loop_start = loop_start->next;
				slow = slow->next;
			}
			return (loop_start);
		}
	}

	return (NULL);
}
