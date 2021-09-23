#include "lists.h"

/**
 * is_palindrome - get palindrome word
 * @head: root node
 * Return: if is palindrome 1 else 0
 */
int is_palindrome(listint_t **head)
{
	listint_t *aux;
	int size = 0, i, list[2048], j;

	if (!*head)
		return (1);
	aux = *head;
	while (aux)
	{
		list[size] = aux->n;
		aux = aux->next;
		size++;
	}
	for (i = 0, j = size - 1; i < size / 2; i++, j--)
	{
		if (list[i] != list[j])
			return (0);
	}
	return (1);
}
