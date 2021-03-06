#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to linked list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
