#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to pointer to head list
 * @n: integer to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp_node = *head;
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}
	tmp_node->next = new_node;
	return (new_node);
}
