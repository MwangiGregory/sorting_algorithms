#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: An array of unsorted integers
 * @size: Size of the array array
 */
void bubble_sort(int *array, size_t size)
{
	size_t outer, distance, i;
	int temp = 0;

	if (!array)
		return
	distance = size;
	for (outer = 0; outer < size; outer++)
	{
		for (i = 1; i < distance; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
			}
			print_array(array, size);
		}
		distance--;
	}
}
