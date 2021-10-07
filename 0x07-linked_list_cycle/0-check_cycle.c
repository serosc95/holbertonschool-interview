#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: - is a singly linked list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *copy_1 = list, *copy_2 = list;

	while (copy_1 && copy_2 && copy_2->next)
	{
		copy_1 = copy_1->next;
		copy_2 = (copy_2->next)->next;
		if (copy_1 == copy_2)
			return (1);
	}
	return (0);
}