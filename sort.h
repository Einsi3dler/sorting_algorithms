#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*this are functions that access variables*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*this are sort functions*/
void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void quick_sort(int *array, size_t size);

/*util functions*/
int partition(int *array, int low, int high, size_t size);
void sort(int *array, int low, int high, size_t size);
#endif /*SORT_H*/
