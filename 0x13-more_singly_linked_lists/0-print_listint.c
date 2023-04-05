#include "lists.h"

/**
 * print_listint - This prints all the elements of a list
 * @h: pointer to the head
 * Return: returns the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
