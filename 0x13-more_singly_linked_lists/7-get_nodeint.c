#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to head of list.
 * @index: index of a node starting at 0
 *
 * Return: pointer to the nth node, or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; head != NULL && a < index; a++)
		head = head->next;

	if (head == NULL)
		return (NULL);
	return (head);
}
