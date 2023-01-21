#include "sort.h"
/**
 * selection_sort - sorts an array of number using selection sort
 * @array: the array contains numbers\
 * size: the array size
 * Return:void
 */
void selection_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		size_t j, temp;
		int min_Num, flag, hold;

		flag = 0;
		min_Num = array[i];
		for (j = i+1; j < size; j++)
		{
			if (array[j] < min_Num)
			{
				min_Num = array[i];
				temp = i;
				flag = 1;
			}
		}
		if (flag == 1)
		{
			hold = array[i];
			array[i] = array[temp];
			array[temp] = hold;
		}
		flag = 0;
		print_array(array, size);
	}
}
