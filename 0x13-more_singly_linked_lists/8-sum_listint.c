#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
