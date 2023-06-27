#include "sort.h"

/**
 * selection_sort -  a function that sorts an array of integers
 *
 * @array: parameter of type int
 * @size: parameter of type struct
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t idx;
	size_t tdx;
	size_t sog;
	int mok;

	for (idx = 0; idx < size; idx++)
	{
		sog = idx;

		for (tdx = idx + 1; tdx < size; tdx++)
		{
			if (array[sog] > array[tdx])
				sog = tdx;
		}

		if (idx != sog)
		{
			mok = array[idx];

			array[idx] = array[sog];

			array[sog] = mok;

			print_array(array, size);

		}
	}
}
