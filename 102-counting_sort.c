#include "sort.h"
/**
 * counting_sort -Sorts an arrayof integers
 * in ascending order using the
 * Counting sort algorithm
 * @array: array
 * @size: size
 * Return: no return
 */
void counting_sort(int *array, size_t size)
{
	int max, j;
	size_t i;
	int *count, *output;

	if (!array || size < 2)
		return;
	/* check for max number*/
	for (i = 0, max = array[i]; i < size; i++)
	{
		if (max < array[i])
			max = array[i];
	}

	output = malloc(sizeof(int) * size);
	if (!output)
		return;
	count = malloc(sizeof(int) * max + 1);
	if (!count)
	{
		free(output);
		return;
	}
	/* j is for max and i is for size*/
	for (j = 0; j < max + 1; j++)
		count[j] = 0;
	for (i = 0; i < size; i++)
		count[array[i]] += 1;
	for (j = 1; j < max + 1; j++)
		count[j] += count[j - 1];
	print_array(count, max + 1);

	for (i = 0; i < size; i++)
	{
		output[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(output);
	free(count);
}
