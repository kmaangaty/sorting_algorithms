#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 *
 * @array: parameter of type int
 * @size: parameter of type
 *
*/
void bubble_sort(int *array, size_t size)
{
	size_t idx;
	size_t tdx;
	int mok;
	int tah;

	for (tdx = size, tah = 1; tdx > 0 && tah; tdx--)
	{
		tah = 0;
		for (idx = 0; (idx + 1) < tdx; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				mok = array[idx + 1];
				array[idx + 1] = array[idx];
				array[idx] = mok;
				print_array(array, size);
				tah = 1;
			}
		}
	}
}
