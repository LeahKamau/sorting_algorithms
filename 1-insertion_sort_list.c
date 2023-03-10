#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: doubly linked list of integers
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *temp;

	if (*list == NULL)
		return;
	if (list  == NULL)
		return;

	while (current)
	{
		temp = current;

		while (temp->prev && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;

			if (temp->next)
				temp->next->prev = temp->prev;

			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (!temp->prev)
				*list = temp;
			else
				temp->prev->next = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
