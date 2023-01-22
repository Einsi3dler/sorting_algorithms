#include "sort.h"

/**
 * bubble_sort -  sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, cond;

	if (array == NULL || size < 2)
		return;
	for (j = size, cond = 1; j > 0 && cond; j--)
	{
		cond = 0;
		for (i = 0; (i + 1) < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				cond = 1;
			}
		}
	}
}
