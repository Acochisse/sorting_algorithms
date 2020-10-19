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
    size_t *temp, *current;

       int i, j, min_idx; 
  
    for (i = 0; i < n-1; i++) 
    { 
        
        min_idx = i; 
        for (j = i+1; j < n; j++) 
              if (arr[j] < arr[min_idx]) 
                    min_idx = j; 
  
         
    } 
}