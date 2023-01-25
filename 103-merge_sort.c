#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int low,int mid, int high)
{
	int left_len = m-l;
	int right_len = r- m + 1;

	int temp_left_arr[left_len];
	int temp_right_arr[right_len];

	int i, j, k;

	for (int i = 0; i < left_length; i++)
	{
		temp_left_arr[i] = arr[low + i];
	}

	for (int i = 0; i < right_length; i++)
	{
		temp_right_arr[i] = a[mid + i];
	}

}
void merge_algo(int arr[], int low, int high)
{
	if low < high
	{
		int m;
		mid = low + (high - low) / 2;

		merge_algo(arr, low, mid-1);
		merge_algo(arr, mid, high);

		merge(arr, low, mid, high)

	}

}

void merge_sort(int *array, size_t size)
{
	merge_algo(array, 0, size-1);
}
