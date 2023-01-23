#include "sort.h"
/**
 * partition - this collects the pivot of the array
 * @array: array to be worked on;
 * @low: low point of the array
 * @high: high point of the array
 * @size: this contains the size of the array
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot;
	int i,j,temp;

	pivot = array[high];
	i = (low-1);
	for (j = low; j<=high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (j != i)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (i+1 != high)
	{
		temp = array[i+1];
		array[i+1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i+1);
}


/**
 * sort - this sorts the array recursively
 * @array: the array to be sorted
 * @low: low point of the array
 * @high: high point of the array
 */
void sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pa;

		pa = partition(array, low, high, size);
		sort(array, low, pa-1, size);
		sort(array, pa+1, high, size);
	}
}
/**
 * quick_sort - this sorts the list using the quick sort method
 * @array - this contains the array to be sorted
 * @size - this contains the size of the array
 */
void quick_sort(int *array, size_t size)
{
	sort(array, 0, size-1, size);
}
