#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: a pointer to head of list
 * idx: index of the list where the new node should be added
 * @n: integer to be added to the new node.
 * Return: address of the new element, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_node;
	unsigned int a;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp_node = *head;
	for (a = 0; tmp_node != NULL && a < idx -1; a++)
		tmp_node = tmp_node->next;

	if (tmp_node == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp_node->next;
	tmp_node->next = new_node;

	return (new_node);
}
