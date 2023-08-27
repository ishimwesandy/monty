#include "monty.h"
/**
* free_stack - method that free a doubly linked lists
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *a;

	a = head;
	while (head)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
