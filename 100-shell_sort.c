#include "sort.h"

/**
 * shell_sort -  sorts an array of integers in ascending
 * order using the Shell sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int temp, tmp;

	if (!array || size < 2)
		return;
	while (gap < size / 3)
		gap = (gap * 3) + 1;
	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
			{
				temp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = temp;
			}
		}
		print_array(array, size);
	}
}
