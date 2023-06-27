#ifndef _SORT_
#define _SORT_

#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - typedef struct
 *
 * @n: parameter of type int
 * @prev: parameter of type struct
 * @next: parameter of type struct
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
}listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void _qsort(int *a, int low, int high, int size);
void shell_sort(int *array, size_t size);
void sh_sort(int *a, int size, int n);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);

#endif
