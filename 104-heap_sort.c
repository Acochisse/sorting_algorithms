#include "sort.h"

/**
 * heap_sort - function that sorts by heap sort
 * @array: array to be sorted
 * @size: size of the array
 *
 *
 * Return: no return
 */
void heap_sort(int *array, size_t size)
{
	int temp, i;

	for (i = size / 2 - 1; i >= 0; i--)
	{
		smoothbrain(array, i, size, size);
	}
       	i = size - 1;
	while (i > 0)
	{
		temp = array[i];
		array[i] = array[0];
		array[0] = temp;
		print_array(array, size);
		smoothbrain(array, 0, i, size);
		i--;
	}
}


/**
 * smoothbrain - mounts the array into heap
 * @array: array to be sorted
 * @min: leftmost element in array
 * @max: rightmost element in array
 * @size: size of array
 * Return: no return
 */

void smoothbrain(int *array, int min, int max, size_t size)
{
	int root, temp, right, left;

	root = min;
	left = 2 * root + 1;
	right = 2 * root + 2;

	if (left < max && array[left] > array[root])
	{
		root = left;
	}

	if (right < max && array[right] > array[root])
	{
		root = right;
	}

	if (min != root)
	{
		temp = array[root];
		array[root] = array[min];
		array[min] = temp;
		print_array(array, size);
		smoothbrain(array, root, max, size);
	}
}
