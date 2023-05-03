#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to the head
 * Return: a number
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
