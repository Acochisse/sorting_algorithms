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

	size_t low = 0, i = 0, j = 0;

	if (!array || size < 1)
		return;

	while (j < size)
	{
		i = low = j;
		while (i < size)
		{
			if (array[i] < array[low])
				low = i;
			i++;
		}
		if (j - low != 0)
		{
			swap(&array, j, low);
			print_array(array, size);
		}
		j++;
	}
}


/**
 * swap - swaps two int positions in an array
 * @first: first position
 * @second: second position
 * @array: array to be adjusted
 * Return: void
 */
void swap(int **array, int first, int second)
{
	int temp;

	temp = (*array)[first];
	(*array)[first] = (*array)[second];
	(*array)[second] = temp;
}
