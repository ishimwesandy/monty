#include "monty.h"
/**
  *m_rotl- method that rotate the stack to the top
  *@head: stack on the head
  *@counter: line numbers
 */
void m_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *a;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	a = (*head)->next;
	a->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = a;
}
