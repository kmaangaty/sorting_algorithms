#include "sort.h"

/**
 * print_list - function of type void
 *
 * @list: parameter of type struct
 *
*/
void print_list(const listint_t *list)
{
	int idx = 0;

	while (list)
	{
		if (idx > 0)
			printf(", ");
		printf("%d", list->n);
		++idx;
		list = list->next;
	}
	printf("\n");
}

/**
 * print_array - function of type void
 *
 * @array: parameter of type int
 * @size: parameter of type struct
 *
*/
void print_array(const int *array, size_t size)
{
	size_t idx = 0;

	while (array && idx < size)
	{
		if (idx > 0)
			printf(", ");
		printf("%d", array[idx]);
		++idx;
	}
	printf("\n");
}
