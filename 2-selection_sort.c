#include "sort.h"

/**
 * selection_sort - sorts using selection sort
 *
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		size_t min_idx = i;
		int temp;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}

	}
}
