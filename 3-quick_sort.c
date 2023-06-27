#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers in ascending
 * order using the quick sort algorithm
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}
/**
 * _qsort - helper function for the quick_sort function
 * @a: input arrray
 * @low: index for the first element
 * @high: index for the last element
 * @size: size of the array
 * Return: no return
 */
void _qsort(int *a, int low, int high, int size)
{
	int h, l, i;
	int tmp;

	if (low < high)
	{
		h = high;
		l = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[h])
			{
				if (i != l)
				{
					tmp = a[i];
					a[i] = a[l];
					a[l] = tmp;
					print_array(a, size);
				}
				l++;
			}
		}
		if (l != h && a[l] != a[h])
		{
			tmp = a[l];
			a[l] = a[h];
			a[h] = tmp;
			print_array(a, size);
		}
		_qsort(a, low, l - 1, size);
		_qsort(a, l + 1, high, size);
	}
}
