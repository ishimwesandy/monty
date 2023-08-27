#include "monty.h"
/**
 * m_mod - method that do modulation of 2 numbers
 * top on the element of the stack by the top element of the stack
 * @head: stack on the head
 * @count: line numbers
*/
void m_mod(stack_t **head, unsigned int count)
{
	stack_t *h;
	int l = 0, a;
	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = h->next->n % h->n;
	h->next->n = a;
	*head = h->next;
	free(h);
}
