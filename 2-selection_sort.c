#include "sort.h"

/**
 * selection_sort - function that runs the selection sort algorithm
 * @array: input array
 * @size: doubly linked list
 *
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{

	unsigned long int i, j, min_idx;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
}


/**
 * swap - swaps two int positions in an array
 * @first: first position
 * @second: second position
 * Return: void
 */
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
