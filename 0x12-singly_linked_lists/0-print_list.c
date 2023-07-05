#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: list.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (!(h->str))
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		i++;
	}
	return (i);
}