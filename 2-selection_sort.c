#include "sort.h"

/**
 * selection_sort -  a function that sorts an array of integers in
 * ascending order using the Selection sortalgorithm
 *
 * @array: input array of integers
 * @size: size of the array
 * Return: no return
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, small;

	for (i = 0; i < size; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[small] > array[j])
				small = j;
		}

		if (i != small)
		{
			tmp = array[i];
			array[i] = array[small];
			array[small] = tmp;
			print_array(array, size);
		}
	}
}
