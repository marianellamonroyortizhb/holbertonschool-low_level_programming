#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: Constant list
 * Return: count of elements
 */
size_t print_list(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
