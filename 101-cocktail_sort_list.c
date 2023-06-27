#include "sort.h"

/**
 * swap_list - swaps the elements of the list
 *
 * @ptr1: first pointer
 * @ptr2: second pointer
 * @n: n is 0 for increase, n is 1 for decrease
 * Return: no return
 */
void swap_list(listint_t **ptr1, listint_t **ptr2, int n)
{
	listint_t *head, *tmp;

	head = *ptr1;
	tmp = *ptr2;

	head->next = tmp->next;
	tmp->prev = head->prev;

	if (tmp->next)
		tmp->next->prev = head;

	if (head->prev)
		head->prev->next = tmp;

	head->prev = tmp;
	tmp->next = head;

	if (n == 0)
		*ptr1 = tmp;
	else
		*ptr2 = head;
}

/**
 * increase_sort - move bigger numbers to the end
 *
 * @ptr: pointer to the bigger number
 * @limit: limit of the list
 * @list: list of integers
 * Return: no return
 */
void increase_sort(listint_t **ptr, listint_t **limit, listint_t **list)
{
	listint_t *head;

	head = *ptr;

	while (head != *limit && head->next != *limit)
	{
		if (head->n > head->next->n)
		{
			swap_list(&head, &(head->next), 0);
			if (head->prev == NULL)
				*list = head;
			print_list(*list);
		}
		head = head->next;
	}

	*limit = head;
	*ptr = head;
}

/**
 * decrease_sort - moves the smaller numbers to the start
 *
 * @ptr: pointer to the smaller number
 * @limit: limit of the list
 * @list: list of integers
 * Return: no return
 */
void decrease_sort(listint_t **ptr, listint_t **limit, listint_t **list)
{
	listint_t *head;

	head = *ptr;

	while (head != *limit && head->prev != *limit)
	{
		if (head->n < head->prev->n)
		{
			swap_list(&(head->prev), &head, 1);
			if (head->prev->prev == NULL)
				*list = head->prev;
			print_list(*list);
		}
		head = head->prev;
	}

	*limit = head;
	*ptr = head;
}

/**
 * cocktail_sort_list - sorts a doubly linked list
 * of integers in ascending order using the
 * Cocktail shaker sort algorithm
 *
 * @list: head of the linked list
 * Return: no return
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *limit1, *limit2, *ptr;

	if (list == NULL)
		return;

	if (*list == NULL)
		return;

	limit1 = limit2 = NULL;
	ptr = *list;

	do {
		increase_sort(&ptr, &limit1, list);
		decrease_sort(&ptr, &limit2, list);
	} while (limit1 != limit2);
}
