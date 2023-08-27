#include "monty.h"
/**
 * m_queue - methods prints the top
 * @head: stack on the head
 * @count: line numbers
*/
void m_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.line_fi = 1;
}

/**
 * addqueue - method thta add node to the tail stack
 * @n: new value
 * @head: head of the stack
*/
void addqueues(stack_t **head, int n)
{
	stack_t *new_node, *a;

	a = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (a)
	{
		while (a->next)
			a = a->next;
	}
	if (!a)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		a->next = new_node;
		new_node->prev = a;
	}
}
