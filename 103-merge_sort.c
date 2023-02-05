#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int low,int mid, int high)
{
	int left_len = mid - low + 1;
	int right_len = high - mid;

	int temp_left_arr[left_len];
	int temp_right_arr[right_len];

	int i, j, k;

	for (int i = 0; i < left_len; i++)
	{
		temp_left_arr[i] = arr[low + i];
	}

	for (int i = 0; i < right_len; i++)
	{
		temp_right_arr[i] = arr[mid + 1 + i];
	}

	printf("left: ");
	print_array(temp_left_arr, left_len);
	printf("Right: ");
	print_array(temp_right_arr, right_len);

//	print_array(temp_left_arr, left_len);
//	print_array(temp_right_arr, right_len);

	for (i=0, j=0, k=low; k<= high; k++)
	{
		if((i < left_len) && (j >= right_len || temp_left_arr[i] <= temp_right_arr[j]))
		{
			arr[k] = temp_left_arr[i];
			i++;
		}
		else
		{
			arr[k] = temp_right_arr[j];
			j++;
		}
	}

	printf("done");
	print_array(arr, high);

}
void merge_algo(int arr[], int low, int high)
{
	if (low < high)
	{
		int mid;
		mid = low + ((high+1) - low) / 2;
		mid = mid - 1;

		merge_algo(arr, low, mid);
		merge_algo(arr, mid+1, high);

		merge(arr, low, mid, high); 
	}

}

void merge_sort(int *array, size_t size)
{
	merge_algo(array, 0, size-1);
}
