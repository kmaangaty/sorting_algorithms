#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers
 *
 * @array: parameter of type int
 * @size: parameter of type struct
 *
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}
/**
 * _qsort - function of type void
 *
 * @dao: parameter of type int
 * @dat: parameter of type int
 * @dai: parameter of type int
 * @dap: parameter of type int
 *
 */

void _qsort(int *dao, int dat, int dai, int dap)
{
	int soq;
	int sow;
	int soe;
	int mok;

	if (dat < dai)
	{
		soq = dai;
		sow = dat;
		for (soe = dat; soe < dai; soe++)
		{
			if (dao[soe] < dao[soq])
			{
				if (soe != sow)
				{
					mok = dao[soe];
					dao[soe] = dao[sow];
					dao[sow] = mok;
					print_array(dao, dap);
				}
				sow++;
			}
		}
		if (sow != soq && dao[sow] != dao[soq])
		{
			mok = dao[sow];
			dao[sow] = dao[soq];
			dao[soq] = mok;
			print_array(dao, dap);
		}
		_qsort(dao, dat, sow - 1, dap);
		_qsort(dao, sow + 1, dai, dap);
	}
}
