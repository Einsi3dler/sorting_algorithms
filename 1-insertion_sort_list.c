#include "sort.h"

/**
 * insertion_sort_list -  sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: the doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *curr;

	if (*list == NULL)
		return;
	curr = *list;

	while (curr != NULL)
	{
		while (curr->next != NULL && curr->n > curr->next->n)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			tmp->prev = curr->prev;

			if (curr->prev != NULL)
				curr->prev->next = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = curr;
			curr->prev = tmp;
			tmp->next = curr;
			if (tmp->prev != NULL)
				curr = tmp->prev;
			else
				*list = tmp;
			print_list(*list);
		}
		curr = curr->next;
	}
}
