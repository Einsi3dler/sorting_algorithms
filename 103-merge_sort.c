#include "sort.h"
void merge(int *array, int low, int mid, int high)
{
	int i,j,k,temp1,temp2;

	temp1 = mid - low + 1;
	temp2 = high - mid;

	int arr1[temp1], int arr2[temp2];

	for (i=0; i<temp1; i++)
	{
		arr1[i] = array[low + i];
	}
	for (j=0; j<temp2; j++)
	{
		arr2[i] = array[mid + 1 + j]
	}
}
/**
 * merge_algo: this is the merge sort algorithim
 * @array - this contains the array to be sorted
 * @low - low point of the array
 * @high - high point of the array
 */
void merge_algo(int *array, int low, int high)
{
	if (low < high)
	{
		int mid;

		mid = low + (high - 1) /2;

		merge_algo(arr, low , mid);
		merge_algo(arr, mid+1, high);

		merge(arr, low, mid, high)
	}
}
/**
 * merge_sort - this sorts an array of integers in ascending order through merge sort
 * @array: array of integers
 * @size: size of int
 */
 void merge_sort(int *array, size_t size)
{

}
