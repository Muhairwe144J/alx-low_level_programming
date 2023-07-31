#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

const listint_t *detect_loop(const listint_t *head);

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop_node = detect_loop(head);
	size_t count = 0;

	while (head != NULL)
	{
		if (head == loop_node && count > 0)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (count);
		}

		printf("[%p] %d\n", (void *)head, head->n);

		count++;
		head = head->next;
	}

	return (count);
}

/**
 * detect_loop - Detects if there's a loop in the linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Address of the node where the loop starts, or NULL if there's no loop.
 */
const listint_t *detect_loop(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			/* Move slow_ptr to the head and start both pointers at the same speed */
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}
	}

	return (NULL);
}
