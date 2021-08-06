#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - insert node in index list
 * @head: pointer to list
 * @number: index for insert node
 * Return: list with node new
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *newNode;
	int count = 0;

	current = *head;
	newNode = malloc(sizeof(listint_t));
    	if (newNode == NULL)
        	return (NULL);
	newNode->n = number;
	while (current != NULL)
	{
		if(current->next == NULL || (current->next)->n > number)
		{
			newNode->next = current->next;
			current->next = newNode;
			break;
		}
		current = current->next;
		count++;
	}
	if(count == 0)
		*head = newNode;
	return *head;
}
