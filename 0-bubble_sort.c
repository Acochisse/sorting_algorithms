#include "sort.h"

/**
 * bubble_sort - function that runs the bubble sort method
 *
 * @array: input array
 * @size: linked list structure
 *
 * Return: no return
 */

void bubble_sort(int *array, size_t size)

{
	size_t stepper;
	size_t i;
	int temp;

	if (array == NULL)
	{
		return;
	}

	for (stepper = 0; stepper < size - 1; stepper++)
	{
		for (i = 0; i < size - stepper - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

