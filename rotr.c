#include "monty.h"
/**
  *m_rotr- method that rotate the stack to the bottom
  *@head: stack on the  head
  *@count: line numbers
 */
void m_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
