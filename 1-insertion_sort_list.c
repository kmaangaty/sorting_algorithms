#include "sort.h"

/**
 * insertion_sort_list - a function that sorts a odubly linked list
 *
 * @list: parameter of type struct
 *
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *nzm;
	listint_t *mok;

	if (!list)
		return;

	nzm = *list;

	while (nzm)
	{
		while (nzm->next && (nzm->n > nzm->next->n))
		{
			mok = nzm->next;
			nzm->next = mok->next;
			mok->prev = nzm->prev;
			if (nzm->prev)
				nzm->prev->next = mok;
			if (mok->next)
				mok->next->prev = nzm;
			nzm->prev = mok;
			mok->next = nzm;
			if (mok->prev)
				nzm = mok->prev;
			else
				*list = mok;
			print_list(*list);
		}
		nzm = nzm->next;
	}
}
