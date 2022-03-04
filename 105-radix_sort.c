#include "sort.h"
#include "stdlib.h"
/**
 * radix_sort - sorts an array in ascending order: Radix sort
 * @array: an array greater than 1
 * @size: size of array
 * Return: is void
 */
 
void radix_sort(int *array, size_t size)
{
	int maximum, digits = 0, power = 1, *new_array, count[10], num, i;
	unsigned int j, k;

	if (array == NULL || size < 2)
		return;
	new_array = malloc(sizeof(int) * (int)size);
	if (new_array == NULL)
		return;

	for (k = 1 ; k < size ; k++)
	{
		if (maximum < array[k])
			maximum = array[k];
	}

	for (; maximum > 0 ; digits++)
		maximum /= 10;

	for (i = 0 ; i < digits ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
			count[j] = 0;

		for (j = 0 ; j < size ; j++)
		{
			num = (array[j] / power) % 10;
			count[num]++;
		}

		for (j = 1 ; j < 10 ; j++)
			count[j] += count[j - 1];

		for (j = size - 1 ; ((int)j >= 0) ; j--)
		{
			num = (array[j] / power) % 10;
			new_array[count[num] - 1] = array[j];
			count[num]--;
		}

		for (j = 0 ; j < size ; j++)
			array[j] = new_array[j];
		print_array(array, size);
		power *= 10;
	}
	free(new_array);
}